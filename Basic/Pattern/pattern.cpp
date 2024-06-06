/*
 ******
 ******
 ******
 ******
 ******
 ******
 */
#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int i = 1; /*
     while (i <= num)
     {
         int j = 1;
         while (j <= num)
         {
             cout << "*";
             j++;
         }
         cout << endl;
     i++;
     }
     */

    /*
         11111
         22222
         33333
    */

    /*
       while (i <= num)
       {
           int j = 1;
           while (j <= num)
           {
               cout << i;
               j++;
           }
           cout << endl;
           i++;
       }

       */

    /*
         1 2 3 4
         1 2 3 4
         1 2 3 4
         1 2 3 4
    */

    /*
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << j;
            j++;
      }
      cout << endl;
      i++;
      }
      */

    /*
      4 3 2 1
      4 3 2 1
      4 3 2 1
      4 3 2 1
    */

    /*
      while (i <= num)
      {
          int j = 1;
          while (j <= num)
          {
              cout << num - j + 1;
              j = j + 1;
          }
          cout << endl;
          i = i + 1;
      }

      */

    /*
    int count = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    */


   /*
        *
        * *
        * * *
        * * * *
   */

    /* 
    while (i <= num)
    {
        int j = 1;
        while (j <= i)
        {
            cout << " *";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    */


   /*
        1
        2 2
        3 3 3
        4 4 4 4
   */

  /*
    int row = 1;
    while (row <= num)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
      }
    */


   /*
        1
        2 3
        4 5 6
        7 8 9 10
   */

    int count = 1;
    int row = 1;
    while (row <= num)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
        }
    
}