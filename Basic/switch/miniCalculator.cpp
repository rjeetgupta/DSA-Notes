#include <iostream>

using namespace std;
int main(){
    float num, num1, num2;
    char ch;
    cout << "Enter two number. : ";
    cin >> num1 >> num2;
    cout << "Enter operation. : ";
    cin >> ch;
    switch (ch)
    {
    case '+' : num = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is : " << num;
        break;

    case '-' : num = num1 - num2;
        cout << "Subtraction of " << num1 << " and " << num2 << " is : " << num;
        break;

    case '*' : num = num1 * num2;
        cout << "Multiplication of " << num1 << " and " << num2 << " is : " << num;
        break;

    case '/' : num = num1 / num2;
        cout << "Devision of " << num1 << " and " << num2 << " is : " << num;
        break;

    
    default:
        cout << "Invalid Opteration ";
        break;
    }
}