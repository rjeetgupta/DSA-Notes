// Find the Smallest Divisor Given a Threshold

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int smallestDivisor(vector<int> arr, int threshold) {
    int n = arr.size();
    
    //  find the maximum element
    int maxi = *max_element(arr.begin(), arr.end());

    //Find the smallest divisor:
    for (int d = 1; d <= maxi; d++) {
        //Find the summation result:
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += ceil((double)(arr[i]) / (double)(d));
        }
        if (sum <= threshold)
            return d;
    }
    return -1;
}

// Optimized it using Binary Search on Answerr

int sumOfDivision(vector<int> &arr, int div) {
    int n = arr.size();
        //Find the summation of division values:
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ceil((double)(arr[i]) / (double)(div));
    }
    return sum;
}

int minDivisor(vector<int> &arr, int threshold) {
    int low = 1;
    int high = *max_element(arr.begin(), arr.end());

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(sumOfDivision(arr, mid) <= threshold) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};
    int threshold = 7;

    cout << "The minimum divisor is : " << minDivisor(arr, threshold) << endl;

    return 0;
}