// Given an array arr[] that contains positive and negative integers (may contain 0 as well). Find the maximum product that we can get in a subarray of arr[].

#include <bits/stdc++.h>

using namespace std;

// It tooks O(N^2) timecomplexity and O(1) spacecomplexity

int maxProductSubArray(vector<int> &arr) {

    int n = arr.size();
    
    int result = arr[0];

    for(int i = 0; i < n; i++) {

        int mul = 1;

        for(int j = i; j < n; j++) {
            mul = mul * arr[j];

            result = max(result, mul);
        }
    }

    return result;

}


// It tooks O(N) time complexity and O(1) space complexity

int maximumProduct(vector<int> &arr) {
    int n = arr.size();

    // Initializing current maximum Product
    int currMaxi = arr[0];

    // Initializing Min Product if we have neg & 0 in the array to keep track
    int currMini = arr[0];

    // Initializing overall Max Product
    int maxProd = arr[0];

    for(int i = 1; i < n; i++) {

        int temp = max({arr[i], arr[i] * currMaxi, arr[i] * currMini});

        currMini = min({arr[i], arr[i] * currMaxi, arr[i] * currMini});

        currMaxi = temp;

        maxProd = max(maxProd, currMaxi);
    }

    return maxProd;

}

int main() {

    vector<int> arr = {-2, 6, -3, -10, 0, 2};

    cout << "Maximum SubArray Product : " << maxProductSubArray(arr) << endl;
    cout << "Maximum SubArray Product : " << maximumProduct(arr) << endl;

    return 0;
}