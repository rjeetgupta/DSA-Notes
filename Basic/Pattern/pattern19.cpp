#include <iostream>
using namespace std;

void printPattern(int n){
        int initialSpace = 0;
    for (int i = 1; i < n; i++){
        // stars
        for(int j = 0; j <= n - i; j++){
            cout << "*" << " "; 
        }

        // spaces
        for(int j = 0; j < initialSpace; j++){

        }

        // stars
        for(int j = 1; j <= n - i; j++){
            cout << "*" << " "; 
        }

        initialSpace += 2;
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    printPattern(n);
}