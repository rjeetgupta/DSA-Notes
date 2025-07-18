// A peak element is an element that is strictly greater than its neighbors.

// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

#include <iostream>
#include <vector>
using namespace std;

// Brute force solution

int findPeakElement(vector <int> arr) {
    int n = arr.size();
    if(n == 1)
        return 0;

    if(arr[0] > arr[1])
        return 0;
    if(arr[n-1] > arr[n-2])
        return n - 1;

    for (int i = 1; i < n - 1; i++) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
            return i;
            break;
        }
    }

    return -1;
}

// Optimized Solution

int peakElement(vector<int> arr) {
    int n = arr.size();

    // If array has only one elements
    if(n == 1)
        return 0;
    // check for first element
    if(arr[0] > arr[1])
        return 0;
    //check for last element
    if(arr[n-1] > arr[n-2])
        return n - 1;

    int low = 1, high = n - 2;
    while(low <= high) {
        int mid = low + (high - low) / 2;

        // If mid is my peak element
        if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid+1]) {
            return mid;
        }

        // If I am on the left
        if(arr[mid] > arr[mid-1])
            low = mid + 1;

        // If I am on the right side
        else
            high = mid - 1;
    }
    return -1;
}

int main() {

    int n;
    cout << "Enter the size of an sorted array : ";
    cin >> n;

    // Intialize the vector with array size
    vector<int> arr(n);
    cout << "Enter array element : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Now print the peak element
    cout << findPeakElement(arr) << endl;
    cout << peakElement(arr) << endl;

    return 0;
}