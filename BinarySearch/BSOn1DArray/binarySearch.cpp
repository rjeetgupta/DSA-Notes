// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.


#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> arr, int n, int target) {
    int low = 0;
    int high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == target)
            return mid;
        else if(arr[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return -1;
}


int main() {

    int n;
    cout << "Enter the length/size of the array : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array elements : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element which you want to find : ";
    cin >> target;

    cout << "Element found at index : " << search(arr, n, target);

    return 0;
}