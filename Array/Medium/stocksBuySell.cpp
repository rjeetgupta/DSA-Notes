// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include <iostream>
#include <vector>

using namespace std;

// Brute force approach
int maximumProfit(vector<int> arr) {
    int maxProfit = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                maxProfit = max(arr[j] - arr[i], maxProfit);
            }
        }
    }
    return maxProfit;
}

// Optimal Approach

int maxProfit(vector<int> arr) {
    int maxProfit = 0;
    int minPrice = INT8_MAX;

    for (int i = 0; i < arr.size(); i++) {
        minPrice = min(minPrice, arr[i]);
        maxProfit = max(maxProfit, arr[i] - minPrice);
    }

    return maxProfit;
}


int main() {
    int n;

    cout << "Enter size of array element : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements : ";
    // Accepting array element
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Maximu profit is : " << maxProfit(arr) << endl;

    return 0;
}