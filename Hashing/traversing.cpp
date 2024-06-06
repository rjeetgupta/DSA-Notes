#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // array input
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // pre calculation
    int hash[13] = {0};
    for (int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }


    int q;
    cin >> q;

    while(q--){
        int number;
        cin >> number;
        // fetch
        cout << number << " -> "<< hash[number] << endl;
    }
}