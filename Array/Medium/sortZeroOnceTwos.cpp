#include <iostream>
#include <vector>
using namespace std;

// Brute Force approach
// using Merge Sort

// Better Solution
vector<int> sortedArray(vector<int> arr) {
    int cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt = 0;
    for (int i = 0; i < arr.size(); i++) {
        if(arr[i] == 0)
            cnt0++;
        else if(arr[i] == 1)
            cnt1++;
        else
            cnt2++;
    }

    for (int i = 0; i < cnt0; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < cnt1; i++) {
        arr[i] = 1;
    }

    for (int i = 0; i < cnt2; i++) {
        arr[i] = 2;
    }

    return arr;
}



int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of array : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // After sorting the array elements are
    cout << "After sorting the array elements are : ";
    vector<int> result = sortedArray(arr);

    for(auto it: result) {
        cout << it << " ";
    }

    return 0;
}