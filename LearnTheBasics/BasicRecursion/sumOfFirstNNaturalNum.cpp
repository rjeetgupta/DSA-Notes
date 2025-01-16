// Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.

#include <iostream>
using namespace std;

int sumOfSeries(int n) {
    if(n <= 0) {
        return 0;
    }

    return n * n * n + sumOfSeries(n - 1);
}

int main() {

    int n;
    cout << "Enter a number : " ;
    cin >> n;

    cout << "Sum cube of till " << n << " natural numbers is : " << sumOfSeries(n);

    return 0;
}