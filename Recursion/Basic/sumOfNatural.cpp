#include <iostream>
using namespace std;

// Parameterized way

void sumOfNatural(int i, int sum){
    int n = i;
    if(i < 1){
        cout << "Sum of " << n << " Natural number is : " << sum;
        return;
    }
    sumOfNatural(i - 1, sum + i);
}

// Functional way

void sum(int n) {
    if(n == 0)
        return 0;
    return n + sum(n - 1);
}

int main(){
    int n;
    cin >> n;

    sumOfNatural(n, 0);

    // sumOfNaturalNum(n);
    cout << sumOfNaturalNum(n);
}