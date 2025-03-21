#include <iostream>
using namespace std;

int setIthBit(int num, int i) {
    // Perform a OR opertaion with num and 1 << i
    return (num | (1 << i));
}


int main() {

    int num, i;

    cout << "Enter a number to set ith bit : ";
    cin >> num;

    cout << "Which bit you want to set : ";
    cin >> i;

    cout << "After the setting the ith bit the number becomes : " << setIthBit(num, i);

    return 0;
}