#include <bits/stdc++.h>
using namespace std;

void rotateByDPlaces(vector<int> &arr, int d) {
    int size = arr.size();
    d = d % size;

    vector<int> temp(size);

    for(int i = 0; i < size - d; i++) {
        temp[i] = arr[d + i];
    }

    for(int i = 0; i < d; i++) {
        temp[size - d + i] = arr[i];
    }

    for(int i = 0; i < size - 1; i++) {
        arr[i] = temp[i];
    }

    for(auto it : temp) {
        cout << it << " ";
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    rotateByDPlaces(arr, 10);

    // for(auto it: arr) {
    //     cout << it << " ";
    // }
    return 0;
}