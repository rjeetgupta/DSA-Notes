// Return the min integer K such that KOKO can eat all bananas within H hours.

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Using the naive solution  
int findMax(vector<int> &arr) {
    int maxi = INT16_MIN;
    int n = arr.size();
    //find the maximum:
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int> &arr, int hourly) {
    int totalH = 0;
    int n = arr.size();
    //find total hours:
    for (int i = 0; i < n; i++) {
        totalH += ceil((double)(arr[i]) / (double)(hourly));
    }
    return totalH;
}

int minimumRateToEatBanana(vector<int> arr, int h) {
    //Find the maximum number:
    int maxi = findMax(arr);

    //Find the minimum value of k:
    for (int i = 1; i <= maxi; i++) {
        int reqTime = calculateTotalHours(arr, i);
        if (reqTime <= h) {
            return i;
        }
    }

    //dummy return statement
    return maxi;
}

// Optimized it using Binary search 
// Here I am using BS on answer because I can see the answer is lie b/w 1 to the max element

int MinimumTimeToEatBanana(vector<int> arr, int h) {

    int low = 1, high = findMax(arr);
    //apply binary search:
    while (low <= high) {
        int mid = (low + high) / 2;
        int totalH = calculateTotalHours(arr, mid);
        if (totalH <= h) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {

    int h = 8;
    vector<int> arr = {7, 15, 6, 3};

    cout << "KOKO can eat atleast " << MinimumTimeToEatBanana(arr, h) << " banana per Hours " << endl;

    return 0;
}