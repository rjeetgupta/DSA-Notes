#include <iostream>
#include <vector>
using namespace std;

bool isArraySorted(vector<int> &arr, int n) {
    int count = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            count++;
        }
    }

    if(arr[n - 1] > arr[0]) {
        count++;
    }

    return count <= 1;
}

int main() {
    int n;
    cout << "Enter the length of an Array : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array elements : " << endl;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if(isArraySorted(arr, n)) {
        cout << "Array element is sorted." << endl;
    } else {
        cout << "Array element is not sorted." << endl;
    }


    return 0;
}