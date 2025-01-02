// C++ Program to find the maximum subarray sum using nested loops 

#include <bits/stdc++.h>
using namespace std;

// Function to find the sum of subarray with maximum sum
int maxSubarraySum(vector<int> &arr) {
    int res = arr[0];
  
    // Outer loop for starting point of subarray
      for(int i = 0; i < arr.size(); i++) {
        int currSum = 0;
      
        // Inner loop for ending point of subarray
        for(int j = i; j < arr.size(); j++) {
            currSum = currSum + arr[j];
          
            // Update res if currSum is greater than res
            res = max(res, currSum);
        }
    }
    return res;
}

// Using Kadance's Algorithm

int findMaxSubArraySum(vector<int> &arr) {
    int maxi = INT16_MIN;
    int sum = 0;
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        sum = sum + arr[i];

        // maxi = max(maxi, sum);
        if(sum > maxi) {
            maxi = sum;
        }

        if(sum < 0) {
            sum = 0;
        }
    }

    return maxi;
}

int main() {
    // vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    vector<int> arr = {-2, -4};
    cout << maxSubarraySum(arr) << endl;
    cout << findMaxSubArraySum(arr) << endl;
    return 0;
}