#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int num1 = 0;
    int num2 = 1;
    cout << num1 << " " << num2 << " ";
    for (int i = 1; i <= num; i++)
    {
        int nextNumber = num1 + num2;
        cout << nextNumber << " ";
        num1 = num2;
        num2 = nextNumber;
    }
    
}