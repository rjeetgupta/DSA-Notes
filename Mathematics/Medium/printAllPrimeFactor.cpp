#include <iostream>
using namespace std;

bool checkPrime(int num) {
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
        return true;
    } else {
        return false;
    }
}

// It will take timecomplexity = O(N * sqrt(N)) and spacecomplexity O(1) for solving the question otherwise overall O(no of prime number) 
void printAllPrimeFactors(int num) {
    for (int i = 2; i <= num; i++) {
        if(num % i == 0) {
            if(checkPrime(i)) {
                cout << i << " ";
            }
        }
    }
}


// It will take timecomplexity ~ O(sqrt(N) *  2 * sqrt(N)) and spacecomplexity O(1) for solving the question otherwise overall O(no of prime number) 
void printPrimeFactors(int num) {
    for (int i = 1; i * i <= num; i++) {
        if(num % i == 0) {
            if(checkPrime(i)) {
                cout << i << " ";
            }
            if(num / i != i) {
                if(checkPrime(num / i)) {
                    cout << i << " ";
                }
            }
        }
    }
}

// timecomplexity = O(N) for large Number which is prime
void primeFactors(int N) {
    for (int i = 2; i <= N; i++) {
        if(N % i == 0) {
            cout << i << " ";
            while(N % i == 0) {
                N = N / i;
            }
        }
    }
}


// timecomplexity ~ O(sqrt(N) * log(N)) timecomplexity = O(1)
void primeFactor(int N) {
    for (int i = 2; i * i <= N; i++) {
        if(N % i == 0) {
            cout << i << " ";
            while(N % i == 0) {
                N = N / i;
            }
        }
    }

    if(N != 1) {
        cout << N << " ";
    }
}

int main() {

    int number;
    cout << "Enter a number : ";
    cin >> number;

    // printAllPrimeFactors(number);
    // printPrimeFactors(number);
    primeFactor(number);

    return 0;
}