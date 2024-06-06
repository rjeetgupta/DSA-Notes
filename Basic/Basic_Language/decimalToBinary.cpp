/*
    the digit 1,2,3 to form 123 the formula is => ans = (ans * pow(10, i)) + digit
    the digit 1,2,3 to form 321 the formula is => ans = (digit * pow(10, i)) + ans
*/

#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;
}