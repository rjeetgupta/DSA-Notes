#include <iostream>
using namespace std;

void dummy(int num){
    num++;
    cout << " No is " << num << endl;
}

int main(){
    int num;
    cin >> num;
    dummy(num);
    cout << " Number is " << num;

    return 0;
}