#include <iostream>
using namespace std;

string reverse(string str) {
    cout << str << "  ";
    int n = str.length() - 1;
    string rev = "";
    while(n != 0) {
        rev += str[n];
        n--;
    }
    return rev;
}

string convert2Binary(int num) {
    string result = "";
    while(num != 1) {
        if(num % 2 == 1) {
            result += "1";
        } else {
            result += "0";
        }
        num = num / 2;
    }

    reverse(result);
    return result;
}

int main() {

    int number;

    cout << "Enter a number to convert to Binary : ";
    cin >> number;

    cout << "The converted Binary is : " << convert2Binary(number);

    return 0;
}