// Given a binary array nums, return the maximum number of consecutive 1's in the array.

#include <iostream>
#include <vector>
using namespace std;


int findMaxConsecutiveOnes(vector<int> arr, int n) {
    int maxi = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            cnt++;
            maxi = max(maxi, cnt);
        } else {
            cnt = 0;
        }
    }

    return maxi;
}

int main() {

    int n;
    cout << "Enter the length/size of the array : ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxi = findMaxConsecutiveOnes(arr, n);

    cout << "Maximum Consucative Onces are : " << maxi << endl;

    return 0;
}