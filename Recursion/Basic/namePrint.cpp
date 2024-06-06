#include <bits/stdc++.h>
using namespace std;

void printName(int i, int n) {
    if(i > n)
        return;
    cout << "Raj" << endl;
    printName(i + 1, n);
}

int main() {
    int n;
    cout << "Enter the number of times ti print the name : ";
    cin >> n;

    printName(1, n);
    return 0;
}