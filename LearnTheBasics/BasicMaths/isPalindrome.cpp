/*
    Given an integer x, return true if x is a palindrome, and false otherwise.
*/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
    if(n < 0) return false;

    int rev = 0;
    int originalNum = n;

    while(n > 0) {
        int lastDigit = n % 10;
        n = n / 10;

        // handle overflow condition
        if(rev > (INT_MAX - lastDigit) / 10) {
            return 0;
        }

        rev = (rev * 10) + lastDigit;
    }

    return (originalNum == rev);
}

// Another Approach
// reverse the last half of the number and compare the first half
// if number is not non-zero and ends with 0 then it is not a palindrome

bool isPalindrom(int n) {
    if(n < 0 || (n != 0 && n % 10 == 0)) {
        return 0;
    }

    int reversed = 0;
    while(n > reversed) {
        reversed = reversed * 10 + n % 10;
        n = n / 10;
    }

    return (n == reversed) || (n == reversed / 10);
}

int main() {

    int n;
    cout << "Enter a number : ";
    cin >> n;

    if(isPalindrome(n) == true) {
        cout << n << " is a Palindrome number.";
    } else {
        cout << n << " is not a Pallindrome number.";
    }

    return 0;
}