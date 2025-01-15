/*
    Given two integers a and b, write a function lcmAndGcd() to compute their LCM and GCD. The function inputs two integers a and b and returns a list containing their LCM and GCD.
    Example: 
    Input: a = 5 , b = 10
    Output: [10, 5]
    Explanation: LCM of 5 and 10 is 10, while their GCD is 5.
*/

#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<int> lcmGcd(int a, int b) {
    int gcdVal = gcd(a, b);
    int lcmVal = (a / gcdVal) * b;

    return { lcmVal, gcdVal };
}

int main() {

    int a, b;
    cout << "Enter two number to find LCM & HCF : ";
    cin >> a >> b;

    vector<int> result = lcmGcd(a, b);

    cout << "The LCM of " << a << " and " << b << " is : " << result[0] << endl;
    cout << "The HCF of " << a << " and " << b << " is : " << result[1] << endl;

    return 0;
}