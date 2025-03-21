#include <iostream>
using namespace std;

// Using right shift
// ((N >> i) & 1 != 0) -> set bit

bool checkIthBitSetOrNot(int num, int i) {
    // Using left shift operator
    return ((num & (1 << i)) != 0);
}

int main() {

    int num, i;
    cout << "Enter a number to check ith bit set or not : ";
    cin >> num;

    cout << "Enter the ith bit to check : ";
    cin >> i;

    if(checkIthBitSetOrNot(num, i)) {
        cout << num << " ith bit is set.";
    } else {
        cout << num << " ith bit is not set.";
    }

    return 0;
}