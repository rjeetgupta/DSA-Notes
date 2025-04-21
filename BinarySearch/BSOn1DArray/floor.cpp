// Largest element in the array which is smaller than or equal to the target element.

#include <iostream>
#include <vector>
using namespace std;

int searchFloor(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    int floor = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            floor = mid;
            break;
        } else if (arr[mid] < target) {
            floor = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return floor;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int target = 5;

    int floor = searchFloor(arr, target);

    if (floor == -1) {
        cout << "Floor not found." << endl;
    } else {
        cout << "Floor of " << target << " is " << arr[floor] << endl;
    }

    return 0;
}