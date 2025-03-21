#include <iostream>
using namespace std;

int calculateSetBits(int n) {
    int cnt = 0;
    while(n != 0) {
        n = n & (n - 1);
        cnt = cnt + 1;
    }

    return cnt;
}

int minimumNoOfBitsToFlip(int start, int goal) {
    int ans = start ^ goal;
    return calculateSetBits(ans);
}

int main() {

    int start, goal;
    cout << "Enter a number : ";
    cin >> start;

    cout << "Enter the number you want to make : ";
    cin >> goal;

    cout << "Minimum no. of bits to flip to achieve the goal : " << minimumNoOfBitsToFlip(start, goal);

    return 0;
}