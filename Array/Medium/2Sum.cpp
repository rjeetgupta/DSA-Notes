// Given an array of integers arr and an integer target, return indices of the two numbers such that they add up to target.

#include <iostream>
#include <vector>
#include <map>
using namespace std;

// Brute force approach
vector<int> findIndexOfSum(vector<int> arr, int target) {
    map<int, int> mpp;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

// Using two pointer approach
vector<int> twoSum(vector<int> &arr, int target)
{
    int n = arr.size();
    int left = 0;
    int right = n - 1;

    // sort(arr.begin(), arr.end());

    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            return {left, right};
        }
        else if (sum < target)
            left++;
        else
            right--;
    }

    return {-1, -1};
}

int main()
{

    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target sum : ";
    cin >> target;

    // vector<int> result =  findIndexOfSum(arr, target);
    vector<int> result = twoSum(arr, target);

    for (auto it : result)
    {
        cout << it << " ";
    }

    return 0;
}