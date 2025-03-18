#include <iostream>
using namespace std;

int findExponentiation(int num, int power) {
    int m;
    // if num is in double like 2.5 like that then take ans in double
    int ans = 1;
    while(power > 0) {
        if(power % 2 == 1) {
            ans = ans * num;
            power = power - 1;
        } else {
            power = power / 2;
            num = num * num;
        }
    }

    if(m < 0) {
        ans = 1 / ans;
    }
    return ans;
}

int main() {

    int num, power;
    cout << "Enter the number and power : ";
    cin >> num >> power;

    cout << num << " raised to the power " << power << " : " << findExponentiation(num, power);
    return 0;
}