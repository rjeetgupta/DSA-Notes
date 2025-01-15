// Check if a number is Armstrong Number or not

#include <iostream>
#include <math.h>
using namespace std;

int countDigit(int n) {
    int totalDigit = 0;
    while(n > 0) {
        totalDigit++;
        n = n / 10;
    }
    return totalDigit;
}

int power(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        result *= base;
        exp--;
    }
    return result;
}

bool isArmstrong(int n) {
    int totalSum = 0;
    int originalNum = n;
    
    int totalDigit = countDigit(n);

    while(n > 0) {
        int lastDigit = n % 10;
        totalSum += power(lastDigit, totalDigit);
        n = n / 10;
    }

    return originalNum == totalSum;
}

int main() {

    int n;
    cout << "Enter a number : ";
    cin >> n;

    if(isArmstrong(n)) {
        cout << n << " is a Armstrong number." << endl;
    } else {
        cout << n << " is not a Armstrong number." << endl;
    }

    return 0;
}