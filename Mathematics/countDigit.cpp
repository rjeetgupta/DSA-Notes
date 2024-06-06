#include <iostream>
using namespace std;

void countDigit(int num){
    int count = 0;
    while(num > 0){
        count++;
        num = num / 10;
    }
    cout << "The number of digit is : " << count;
}

int main(){
    int num;
    cin >> num;
    countDigit(num);
}