// Search insert position

#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] > target) high = mid - 1;
        else low = mid + 1;
    }
    return low;
}

int main() {

    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element : ";
    cin >> target;

    cout << "The insert position of the element is : " << searchInsert(arr, target);

    return 0;
}