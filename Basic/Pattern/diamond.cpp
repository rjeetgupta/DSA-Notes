#include <iostream>
using namespace std;

void printDiamond(int n) {
        // code here
        for(int i = 0; i < n; i++){
            //space
            for(int j = 0; j <= (n - i - 1); j++){
                cout << " ";
            }
            // star
            for(int j = 0; j <= i; j++){
                cout << "* ";
            }
            cout<< "\n";
        }
        
        for(int i = 0; i < n; i++){
            //space
            for(int j = 0; j < i; j++){
                cout<< " ";
            }
            // star
            for(int j = 0; j < n - i; j++){
                cout << " *";
            }
            cout << "\n";
        }
    }

int main(){
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        printDiamond(n);
    }
}