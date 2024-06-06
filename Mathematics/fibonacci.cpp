#include <bits/stdc++.h>
using namespace std;

void getFibonacci(int n){
    int first = 1;
    int second = 1;
    for(int i = 0; i < n; i++){
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int n;
    cin >> n;
    getFibonacci(n);
    return 0;
}