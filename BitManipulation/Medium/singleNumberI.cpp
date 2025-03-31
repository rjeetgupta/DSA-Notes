// Every number appear twice in the array return the number which appear only once.

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int singleNumber(vector<int> arr) {
    int n = arr.size();
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    for(auto it : mpp) {
        if(it.second == 1) {
            return it.first;
        }
    }

    return -1;
}

// Using XOR Operator 

int singleNumberI(vector<int> arr) {
    int n = arr.size();
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }

    return xorr;
}

int main() {

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)  {
        cin >> arr[i];
    }

    cout << "Single number in the array is : " << singleNumberI(arr);

    return 0;
}