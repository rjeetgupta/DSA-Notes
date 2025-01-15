/*
    Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.
    Input: n = 12
    Output: 2
    Explanation: 1, 2 when both divide 12 leaves remainder 0.   
*/

#include <iostream>
using namespace std;

int evenlyDivides(int n) {      
        int originalNum = n;
        int count = 0;
        while(n > 0) {
            int lastDigit = n % 10;
            if(lastDigit != 0 && originalNum % lastDigit == 0) {
                count++;
            }
            n = n / 10;
        }
        return count;
    }

int main() {

    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "The number of digit that evenly divide the number : " << evenlyDivides(n);
    
    return 0;
}