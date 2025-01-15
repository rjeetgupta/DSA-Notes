/*
    Given a positive integer n, The task is to find the value of Σi F(i) where i is from 1 to n and function F(i) is defined as the sum of all divisors of i.

    Input: n = 4
    Output: 15
    Explanation:
    F(1) = 1
    F(2) = 1 + 2 = 3
    F(3) = 1 + 3 = 4
    F(4) = 1 + 2 + 4 = 7
    So, F(1) + F(2) + F(3) + F(4) = 1 + 3 + 4 + 7 = 15

*/

#include <iostream>
#include <math.h>
using namespace std;

int allDivisors(int n) {
    int totalDivisors = 0;
    
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            // totalDivisors += i; // Brute force solution ends here

            // Optimized way, It will take sqrt(n) time-complexity
            if(i == n / i) {
                totalDivisors += i;
            } else {
                totalDivisors += i + (n / i);
            }
        }
    }

    return totalDivisors;
}


int sumOfDivisors(int n) {
    long long sum = 0;
    
    for(int i = 1; i <= n; i++) {
        sum += allDivisors(i);
    }

    return sum;
}

int main() {

    int n;
    cout << "Enter a number to find all divisors of given numbers : ";
    cin >> n;

    cout << "Total divisors of " << n << " is : " << sumOfDivisors(n);

    return 0;
}