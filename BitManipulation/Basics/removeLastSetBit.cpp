#include <iostream>
using namespace std;

int removeLastIthBit(int num) {
    // Perform AND operation one less than the num
    return (num & (num - 1));
}

int main() {

    int num;

    cout << "Enter a number to remove last ith bit : ";
    cin >> num;

    cout << "After removing the rightmost bit the number becomes : " << removeLastIthBit(num);

    return 0;
}