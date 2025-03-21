#include <iostream>
using namespace std;

int countSetBits(int num) {
    int cnt = 0;
    while(num > 1) {
        if(num % 2 == 1) {
            cnt = cnt + 1;
        }
        num = num / 2;
    }
    if(num == 1) {
        cnt = cnt + 1;
    }

    return cnt;
}

// Using bitwise operator
// timecomplexity = O(logN)
int countSetBit(int n) {
    int cnt = 0;
    while(n > 1) {
        cnt += n & 1;
        n = n >> 1;
    }
    if(n == 1)
        cnt = cnt + 1;
        
    return cnt;
}

// Another way to count the number of set bit.
// timecomplexity = O(no. of set bits)
int calculateSetBits(int n) {
    int cnt = 0;
    while(n != 0) {
        n = n & (n - 1);
        cnt = cnt + 1;
    }

    return cnt;
}

int main() {

    int num;
    cout << "Enter a number to count the set bit : ";
    cin >> num;

    cout << "The number of set bit in " << num << " is : " << calculateSetBits(num);

    return 0;
}