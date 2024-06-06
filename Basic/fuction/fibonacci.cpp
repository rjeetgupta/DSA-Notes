#include <iostream>
using namespace std;

void fibonacciSeries(int n){

    int firstNo = 0;
    int secondNo = 1;
    cout << firstNo << " " << secondNo << " ";
    for (int i = 1; i <= n; i++){
    int nextNumber = firstNo + secondNo;
    cout << nextNumber << " ";
    firstNo = secondNo;
    secondNo = nextNumber;
    }
}

int main(){
    int num;
    cin >> num;
    fibonacciSeries(num);
    return 0;
}