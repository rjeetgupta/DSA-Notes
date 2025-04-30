#include <iostream>
#include <vector>

using namespace std;

// First Approach :- Using linear search

int SearchInArray(vector<int> arr, int n, int target) {
    int low = 0, high = n - 1;
    
    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target)
            return mid;

        // if arr[low] == arr[mid] & arr[mid] == arr[high]

        if(arr[low] == arr[mid] && arr[mid] == arr[high]) {
            low = low + 1;
            high = high - 1;
            continue;
        }
        
        // if left part is sorted
        if(arr[low] <= arr[mid]) {
            if(arr[low] <= target && target <= arr[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        // if right part is sorted
        else {
            if(arr[mid] <= arr[high]) {
                if(arr[mid] <= target && target <= arr[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
        
    }

    return -1;
}

int main() {

    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    // Declear a vector for storing the array element
    vector<int> arr(n);

    // input array element
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element which you are searching : ";
    cin >> target;

    cout << "Your element at index : " << SearchInArray(arr, n, target);

    return 0;
}