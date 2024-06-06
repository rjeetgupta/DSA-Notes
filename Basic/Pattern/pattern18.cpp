#include <iostream>
using namespace std;

void printPattern(int n){
    for (int i = 0; i < n; i++){
        for (char ch = 'E' - i; ch <= 'E'; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}