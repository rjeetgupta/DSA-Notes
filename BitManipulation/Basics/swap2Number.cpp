#include <iostream>
using namespace std;

int main() {

    int num1, num2;
    cout << "Enter two number : ";
    cin >> num1 >> num2;

    cout << "Before swapping numbers are : " << num1 << " and " << num2 << endl;

    // Using xor operator to swap
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;

    cout << "After swapping the numbers are : " << num1 << " and " << num2;

    return 0;
}