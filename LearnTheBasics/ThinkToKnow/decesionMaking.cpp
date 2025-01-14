// Given two integers, n and m. The task is to check the relation between n and m. Return "lesser" if n < m,  "equal" if n == m, and "greater" if n > m.

#include <iostream>
using namespace std;

int main() {
    int n, m;

    cout << "Enter two integer n & m : ";
    cin >> n >> m;

    if(n < m) {
        cout << "lesser";
    } else if(n == m) {
        cout << "equal";
    } else {
        cout << "greater";
    }

    return 0;
}