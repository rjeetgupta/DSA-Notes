// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

#include <iostream>
using namespace std;

// Brute force solution
int findSquareRoot(int number) {
    if(number < 0) {
        return -1;
    }

    int ans = -1;
    for (int i = 1; i * i <= number; i++) {
        if(i * i <= number) {
            ans = i;
        }
    }

    return ans;
}

// Optimized solution using binary search
// I am using the BS becasue the ans will be in the range of 0 to number i.e sorted array

int squareRoot(int num) {
    int ans = -1;
    int low = 1, high = num;
    while(low <= high) {
        // I am using long long becasue It will cause the overflow if I will use "int"
        long long mid = low + (high - low) / 2;
        if(mid * mid <= num) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int number;
    cout << "Enter a number : ";
    cin >> number;

    cout << "Square root of " << number << " is : " << findSquareRoot(number);

    return 0;
}