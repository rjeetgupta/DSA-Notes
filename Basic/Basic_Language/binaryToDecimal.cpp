#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int ans = 0;
    int index = 0;
    while (num != 0)
    {
        int digit = num % 10;
        if (digit == 1)
        {
            ans = ans * pow(2, index);
        }
        
        
        num = num / 10;
        index++;
    }
    cout << ans;
}