#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    /*
    int i = 1;
    while (i <= num)
    {
        cout << i << " ";
        i = i + 1;
    }
    */

    /*

     int sum = 0;
     int i = 1;
     while (i <= num)
     {
         sum = sum + i;
         i = i + 1;
     }
     cout << "Sum of " << num << " natural number is : " << sum;

     */

    /*
       int sum = 0;
       int i = 2;
       while (i <= num)
       {
           sum = sum + i;
           i = i + 2;
       }
       cout << "Sum of " << num << " even natural number is : " << sum;

       */

    // Fahrenheit to Celsius
    // deg C = [(deg. F - 32) * 5]/ 9

    // Prime number program
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            cout << num << " is not Prime "<<endl;
        }
        else
        {
            cout << num << " is a Prime " << endl;

        }
        i = i + 1;
    }
}