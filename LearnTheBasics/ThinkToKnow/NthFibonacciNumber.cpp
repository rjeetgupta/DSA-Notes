/*
The n-th term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -

    F(n) = F(n - 1) + F(n - 2), 
    Where, F(1) = 1, F(2) = 1

*/

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number you want to find nth fibonacci of the series : ";
    cin >> n;

    int first = 0, second = 1;

    for(int i = 2; i <= n; i++) {
        int third = first + second;
        first = second;
        second = third;
    }

    cout << second;

    return 0;
}