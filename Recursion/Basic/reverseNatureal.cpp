#include <iostream>
using namespace std;

void printReverseNaturalNum(int i, int n){
    if(i < 1){
        return;
    }
    cout << i << endl;
    printReverseNaturalNum(i - 1, n);
}

int main(){
    int n;
    cin >> n;
    printReverseNaturalNum(n, n);
}