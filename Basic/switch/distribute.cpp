#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    switch (num)
    {
        int note;
    case 100 :
        note = num / 100;
        cout << "100 Rupees Notes : " << note;
        break;
    
    default:
        cout << "No notes of any rupees";
        break;
    }

    return 0;
}