#include <iostream>
#include <vector>
using namespace std;

void rotateArrayByDPlaces(vector<int> &arr, int d) {
    int n = arr.size();
    int k = d % n;
    
    if(n == 0 || k > n) {
        return;
    }

    vector<int> ans(d);

    for(int i = n - k; i < n; i++) {
        ans[i - n + k] = arr[i];
    }

    for(int i = n - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }

    for(int i = 0; i < k; i++) {
        arr[i] = ans[i];
    }

}


// Optimized Code

void reverse(vector<int>arr, int start, int end) {
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// void rotate(vector<int>& arr, int k) {
//     int n = arr.size();
//     k = k % n;
//     // reverse entire array
//     reverse(arr.begin(), arr.end());
//     // reverse the first k places
//     reverse(arr.begin(), arr.begin()+ k);
//     // reverse the after k places
//     reverse(arr.begin() + k, arr.end());
// }


int main() {

    int n, k;
    cout << "Enter the size of array : ";
    cin >> n;

    cout << "How many times you want to right rotate : ";
    cin >> k;

    vector<int> arr(n);

    cout << "Enter element of the array : ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotateArrayByDPlaces(arr, k);
    cout << "After rotation elements are : " << endl;
    for(auto it: arr) {
        cout << it << " ";
    }

    // rightRotate(arr, k);

    return 0;
}