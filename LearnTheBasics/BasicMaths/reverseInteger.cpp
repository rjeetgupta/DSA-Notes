/*
    Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
*/

#include <bits/stdc++.h>
using namespace std;

int reverse(int n) {
    int rev = 0;
    while(n != 0) {
        int lastDigit = n % 10;
        n = n / 10;

        // handle overflow condition
        if(rev > INT_MAX / 10 || rev == INT_MAX / 10 && lastDigit > 7) {
            return 0;
        }

        // handle underflow
        if(rev < INT_MIN / 10 || rev == INT_MIN / 10 && lastDigit < -8) {
            return 0;
        }

        rev = (rev * 10) + lastDigit;
    }

    return rev;
}

int main() {

    int n ;
    cout << "Enter a number : ";
    cin >> n;

    cout << "The reverse number of " << n << " is : " << reverse(n);

    return 0;
}