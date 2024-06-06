#include <iostream>
using namespace std;

void checkPrime(int num){
    int count = 0;
    for (int i = 1; i <= num; i++){
        if(num % i == 0){
            count++;
        }
    }
        if (count == 2){
        cout << num << " is a Prime number" << endl;
    }
    else
        cout << num << " is a not Prime number" << endl;
}
int main(){
    int num;
    cin >> num;
    checkPrime(num);
}