#include <iostream>
using namespace std;

bool isPowerOf2(int num) {
    return ((num & (num - 1)) == 0);
}

int main() {

    int num;
    cout << "Enter a number to check power of 2 or not : ";
    cin >> num;

    if(isPowerOf2(num)) {
        cout << num << " is Power of 2.";
    } else {
        cout << num << " is not Power of 2.";
    }

    return 0;
}