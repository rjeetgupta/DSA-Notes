#include <iostream>
using namespace std;

int toggleIthBit(int num, int i) {
    // Perform XOR operation with (1 << i)
    return (num ^ (1 << i));
}

int main() {

    int num, i;

    cout << "Enter a number to toggle ith bit : ";
    cin >> num;

    cout << "Which bit you want to toggle : ";
    cin >> i;

    cout << "After toggling the ith bit the number becomes : " << toggleIthBit(num, i);

    return 0;
}