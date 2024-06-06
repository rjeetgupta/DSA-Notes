#include <iostream>
using namespace std;

// 1 -> prime no.
// 0 -> not a prime
bool isPrime(int num){
    for (int i = 2; i < num; i++){
        if (num % i == 0)
        {
            return 0;
        }
        
    }
    return 1;
}

int main(){
    int num;
    cin >> num;
    if (isPrime(num))
    {
        cout << num << " is a Prime number";
    }
    else{
    cout << num << " is not a Prime number";
    }

}