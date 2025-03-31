#include <iostream>

using namespace std;

int divide(int dividend, int divisor) {
    int sum = 0, cnt = 0;

    while(sum + divisor <= dividend) {
        cnt = cnt + 1;
        sum += divisor;
    }

    return cnt;
}

int main() {

    int dividend, divisor;
    cout << "Enter a number : ";
    cin >> dividend;

    cout << "Enter a number to divide that number : ";
    cin >> divisor;

    cout << "After divide the answer is : " << divide(dividend, divisor);

    return 0;
}