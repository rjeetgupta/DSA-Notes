// Print "Ranjeet" N times

#include <iostream>
using namespace std;

void printMyNames(int n, int cnt) {
    // Base Case
    if(cnt == n) {
        return;
    }

    cout << "Ranjeet" << endl;

    printMyNames(n, cnt + 1);
}

int main() {

    int n;
    cout << "How many times You want to print Your name : ";
    cin >> n;

    printMyNames(n, 0);

    return 0;
}