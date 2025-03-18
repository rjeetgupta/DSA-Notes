#include <iostream>
using namespace std;


// It takes O(N) timecomplexity and O(1) space complexity
void isPrime(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if(num % i == 0) {
            count = count + 1;
        }
    }

    if(count == 2) {
        cout << num << " is a Prime Number.";
    } else {
        cout << num << " is not a Prime Number.";
    }
}

// It takes O(sqrt(N)) timecomplexity and 0(1) spacecomplexity for solving

void checkPrime(int num) {
    int count = 0;
    for (int i = 1; i * i <= num; i++) {
        if(num % i == 0) {
            count = count + 1;
            // Print another divisors
            if(num / i != i) {
                count = count + 1;
            }
        }
        if(count > 2)
            break;
    }

    if(count == 2) {
        cout << num << " is a Prime Number.";
    } else {
        cout << num << " is not a Prime Number.";
    }
}

int main() {

    int number;
    cout << "Enter a number : ";
    cin >> number;

    isPrime(number);
    checkPrime(number);

    return 0;
}