#include <iostream>
#include <vector>

using namespace std;


vector<int> leftRotateByOne(vector<int> arr) {
    int n = arr.size();
    vector<int> ans(n);

    for(int i = 1; i < n; i++) {
        ans[i - 1] = arr[i];
    }
    
    ans[n - 1] = arr[0];

    return ans;
}

// 1 2 3 4 5 => 2 3 4 5 1
void leftRotate(vector<int> &arr) {
    int n = arr.size();
    int firstValue = arr[0];

    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = firstValue;

}


int main() {

    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // vector<int> result = leftRotateByOne(arr);

    // for(auto it: result) {
    //     cout << it << " ";
    // }

    leftRotate(arr);
    
    for(auto it: arr) {
        cout << it << " ";
    }

    return 0;
}