#include <iostream>
using namespace std;

int convert2Decimal(string str) {
    int len = str.length();
    int p2 = 1, num = 0;

    for (int i = len - 1; i >= 0; i--) {
        if(str[i] == '1') {
            num = num + p2;
        }
        p2 = p2 * 2;
    }
    return num;
}

int main() {

    string str;

    cout << "Enter a Binary number to convert Decimal : ";
    cin >> str;

    cout << "The converted Decimal is : " << convert2Decimal(str);

    return 0;
}