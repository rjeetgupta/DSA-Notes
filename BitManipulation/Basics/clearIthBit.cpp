#include <iostream>
using namespace std;

int clearIthBit(int num, int i) {
    // Perform AND operation with ~(1 << i)
    return (num & ~(1 << i));
}

int main() {

    int num, i;

    cout << "Enter a number to clear ith bit : ";
    cin >> num;

    cout << "Which bit you want to clear : ";
    cin >> i;

    cout << "After the clearing the ith bit the number becomes : " << clearIthBit(num, i);

    return 0;
}