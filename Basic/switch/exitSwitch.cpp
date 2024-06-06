#include <iostream>
using namespace std;
int main(){
    int num = 1;
    while (1)
    {
    switch (num)
    {
    case 1:
        cout << "this is first" << endl;
        break;
    
    default:
        cout << "This is default case" << endl;
        break;
    }
    exit(0);
    }
}