#include <iostream>
using namespace std;

int main(){
    // declearing an array
    int numbers[15];

    // accessing an array
    // cout << " Value at 0 index : " << numbers[0] << endl;

    
    // we can't access array that is not decleared
    // cout << " Value at 20 index : " << numbers[20] << endl;

    // initializing an array
    int myArr[3] = {4, 5, 8};
    // cout << "Value at 2 index is : " << myArr[2];
    
    // Printing an array
    int n = 10;
    int myArr1[10] = {2, 7};
    for (int i = 0; i < n; i++){
        // cout << myArr1[i] << " ";
    }



    // Initializing with 0 all the element
    int myArr2[10] = {0};
    for (int i = 0; i < n; i++)
    {
        cout << myArr2[i] << " ";
    }
    
}