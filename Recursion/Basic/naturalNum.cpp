#include <iostream>
using namespace std;

void printNaturalNum(int i, int n)
{
    if(i > n){
        return;
    }
    cout << i << endl;
    printNaturalNum(i + 1, n);
}

int main(){
    int n;
    cout << "Enter a number till print number : ";
    cin >> n;
    printNaturalNum(1, n);
}