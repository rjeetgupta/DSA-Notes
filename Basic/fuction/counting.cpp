#include <iostream>
using namespace std;

// function Signature
void printCounting(int num){
    // function body
    for (int i = 1; i <= num; i++){
        cout << i << " ";
    }
}

int main(){
    int num;
    cin >> num;
    // function call
    printCounting(num);
}