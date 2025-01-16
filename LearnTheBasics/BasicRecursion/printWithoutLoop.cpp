/*
    Print numbers from 1 to n without the help of loops.
*/

#include <iostream>
using namespace std;

void printNos(int n, int i) {
    // Base Case
    if(n + 1 <= i) {
        return;
    }
    cout << i << endl;

    printNos(n, i + 1);
}

int main() {

    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "Numbers are : " << endl;
    printNos(n, 1);

    return 0;
}