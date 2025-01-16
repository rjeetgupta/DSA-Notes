// Return the factorial of given number less than or equal to the number

#include <iostream>
#include <vector>

using namespace std;

    void findFactorial(long long n, long long factorial, int i, vector<long long> &result) {
        // Base case
        if (factorial > n) {
            return;
        }
        
        result.push_back(factorial);
        
        findFactorial(n, factorial * (i + 1), i + 1, result);
    }
  
    vector<long long> factorialNumbers(long long n) {
        
        vector<long long> result;
        
        findFactorial(n, 1, 1, result); // Start recursion with initial values
        
        return result;
    }

int main() {

    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "Factorial numbers are less than or equal to " << n << " : " << endl;

    vector<long long> arr = factorialNumbers(n);

    for(auto it: arr) {
        cout << it << " " ;
    }


    return 0;
}