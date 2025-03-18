#include <iostream>
using namespace std;


// It takes O(N) timecomplexity and O(1) space complexity
void PrintAllDivisors(int num) {
    for (int i = 1; i <= num; i++) {
        if(num % i == 0) {
            cout << i << " ";
        }
    }
}

// It takes O(sqrt(N)) timecomplexity and 0(1) spacecomplexity for solving

void allDivisors(int num) {
    for (int i = 1; i * i <= num; i++) {
        if(num % i == 0) {
            cout << i << " ";
            // Print another divisors
            if(num / i != i) {
                cout << num / i << " ";
            }
        }
    }
}

int main() {

    int number;
    cout << "Enter a number : ";
    cin >> number;

    PrintAllDivisors(number);
    allDivisors(number);

    return 0;
}