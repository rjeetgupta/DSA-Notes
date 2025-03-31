#include <iostream>
using namespace std;

int findXOR(int n) {
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = ans ^ i;
    }
    return ans;
}

// Optimized way
int findXORR(int n) {
    if(n % 4 == 1)
        return 1;
    else if(n % 4 == 2)
        return n + 1;
    else if(n % 4 == 3)
        return 0;
    else
        return n;
}


// If starting and ending is given


int main() {

    int n;
    cout << "Enter a number to find XOR till the number : ";
    cin >> n;

    cout << "XOR of the number till " << n << " is : " << findXOR(n);

    return 0;
}