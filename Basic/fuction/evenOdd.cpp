#include <iostream>
using namespace std;
bool isEven(int num){
    if (num & 1)
    {
        return 0;
    }
    return 1;
}
int main(){
    int num1;
    cin >> num1;
    if (isEven(num1))
    {
        cout << "Even number" << endl;
    }
    else{
        cout << "Odd number" << endl;
    }
}