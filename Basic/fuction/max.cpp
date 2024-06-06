#include <iostream>
using namespace std;
int max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    return num2;
}
int main(){
    int a, b;
    cin >> a >> b;
    int m = max(a, b);
    cout << "Maximum number is : " << m;
}