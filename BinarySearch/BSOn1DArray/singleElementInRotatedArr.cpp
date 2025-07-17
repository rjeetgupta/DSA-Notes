// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

#include <iostream>
#include <vector>

using namespace std;

// function to find out the single element
int findOutSingleElement(vector<int> arr) {
    int n = arr.size();
    if(n == 1)
        return arr[0];
    for (int i = 0; i < n; i++) {

        //Check for first index:
        if (i == 0) {
            if (arr[i] != arr[i + 1])
                return arr[i];
        }
        //Check for last index:
        else if (i == n - 1) {
            if (arr[i] != arr[i - 1])
                return arr[i];
        }
        else {
            if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
                return arr[i];
        }
    }
    return -1;
}

// Optimized code using Binary search

int SingleElement(vector<int> arr) {
    int n = arr.size();

    // if array has only one element
    if(n == 1)
        return arr[0];

    // check for first element
    if(arr[0] != arr[1])
        return arr[0];

    // Check for last element
    if(arr[n-1] != arr[n-2])
        return arr[n - 1];

    int low = 1, high = n - 2;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
            return arr[mid];
        }

        else if(mid % 2 != 0 && arr[mid] == arr[mid-1] || mid % 2 == 0 && arr[mid] == arr[mid+1]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {

    int n;
    cout << "Enter the size of an array : ";
    cin >> n;

    // intialize vector with the array size
    vector<int> arr(n);

    // taking input from user
    cout << "Enter array element twice and one element once : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findOutSingleElement(arr);

    return 0;
}