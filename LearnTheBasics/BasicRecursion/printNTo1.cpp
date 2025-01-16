// Print N to 1 using recursion

#include <iostream>
using namespace std;

void printNos(int n) {

    // Base Case
    if(n == 0) {
        return;
    }

    cout << n << " ";
    printNos(n - 1);
}

int main() {

    int n;
    cout << "Enter a number : ";
    cin >> n;

    printNos(n);

    return 0;
}