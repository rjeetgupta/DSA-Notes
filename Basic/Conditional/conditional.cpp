#include <iostream>
using namespace std;
int main()
{
    /* int num;
     cin >> num;  // cin does not read space (" "), tab ("\t"), enter
     if (num > 0)
     {
         cout << num << " is positive" << endl;
     }
     else {
         cout << num << " is negative" << endl;
     }
     return 0;
 */
    // cin.get() => we can get input of space and enter

    // greater or less

    /*
       int num1, num2;
       cout << "Enter first number : ";
       cin >> num1;
       cout << "Enter first number : ";
       cin >> num2;

       if (num1 > num2)
       {
           cout << num1 << " is greater than " << num2 << endl;
       }
       else{
           cout << num2 << " is greater than " << num1 << endl;
       }

       */

    // positive , negative or zero
 /*
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (num > 0)
    {
        cout << num << " is positive number.";
    }
    else if (num < 0)
    {
        cout << num << " is negative number.";
    }
    else
    {
        cout << num << " is Zero";
    }

 */
 // Output Question
 /*
    int a = 9;
    if (a == 9)
    {
        cout << "NINE";
    }
    else if ( a > 0 ) {
        cout << a << " is positive number.";
    }
    else
    {
        cout << a << " is negative number.";
    }
    */

    int a = 3;
    int b = a + 1;
    if ((a = 3) == b)
    {
        cout << a;
    }
    else
    {
        cout << a + 1;
    }
    
    
}
