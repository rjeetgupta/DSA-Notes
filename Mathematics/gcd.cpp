#include <iostream>
using namespace std;

void findGCD(int N1, int N2){
    if(N1 > 0 && N2 > 0){
        N1 = N1 % N2;
    }
    else{
        N2 = N2 % N1;
    }

    if()
}


int main(){
    int num1, num2;
    cin >> num1 >> num2;
    findGCD(num1, num2);
}