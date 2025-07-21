// You are given 2 numbers n and m, the task is to find n√m (nth root of m). If the root is not integer then returns -1.

#include <iostream>
using namespace std;

long long findExponentiation(int b, int exp) {
    long long ans = 1;
    long long base = b;
    while (exp > 0) {
        if (exp % 2) {
            exp--;
            ans = ans * base;
        }
        else {
            exp /= 2;
            base = base * base;
        }
    }
    return ans;
}

int findNthRoot(int n, int m) {
    for (int i = 1; i <= m; i++) {
        long long val = findExponentiation(i, n);
        if(val == m * 111)
            return i;
        else if(val > m * 111)
            break;
    }
    return -1;
}

// Optimized it using Binary search

// return 1 if == m
// return 0 if < m
// return 2 if > m

int exponentiation(int mid, int n, int m) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = ans * mid;
        if(ans > m)
            return 2;
    }

    if(ans == m)
        return 1;

    return 0;
}
int NthRoot(int n, int m) {
    int low = 1, high = m;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        // Funtion which find the value of mid raised to the power n
        int midN = exponentiation(mid, n, m);
        if(midN == 1) {
            return mid;
        } else if(midN == 0) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {

    int n = 3, m = 27;

    int ans = findNthRoot(n, m);
    cout << "The answer is : " << ans << endl;

    return 0;
}