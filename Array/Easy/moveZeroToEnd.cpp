#include <iostream>
#include <vector>

using namespace std;

vector<int> moveZeroToEnd(vector<int> &arr, int n) {
    vector<int> temp;

    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    for(int i = 0; i <= n; i++) {
        if(arr[i] == 0) {
            temp.push_back(arr[i]);
        }
    }

    return temp;
}


vector<int> moveZero(vector<int> arr, int n) {
    // J will store first zero index and next index is I
    int j = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            j = i;
            break;
        }
    }

    if(j == -1) return arr;

    for(int i = j + 1; i < n; i++) {
        if(arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    return arr;
}


int main() {

    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "After moving the zero to end, The array elements are : " << endl;
    vector<int> result = moveZero(arr, n);

    for(auto it : result) {
        cout << it << " " ;
    }
    
    return 0;
}