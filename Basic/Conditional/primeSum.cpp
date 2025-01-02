#include <bits/stdc++.h>
using namespace std;

int findPrime(int n){
    if(n <= 1)
        return 0;
    for (int i = 2; i * i <= n; ++i){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int findPrimeSum(int n){
    int lastDigit = 0, sum = 0;
    while(n > 0){
        lastDigit = n % 10;
        if(findPrime(lastDigit) == 1){
            sum += lastDigit;
        }
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << findPrime(n) << endl;
    int sum = findPrimeSum(n);
    cout << "The sum of all prime " << n << " is: " << sum << endl;

    return 0;
}