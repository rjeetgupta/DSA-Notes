// Using recursion reverse the array

#include <iostream>
#include <vector>

using namespace std;

void reverseHelper(vector<int> &arr, int start, int end) {
    if(start >= end) {
        return;
    }

    swap(arr[start], arr[end]);

    reverseHelper(arr, start + 1, end - 1);
}

void reverseArray(vector<int> &arr) {
    reverseHelper(arr, 0, arr.size() - 1);
}

int main() {

    vector<int> arr = {2, 4, 5, 19, 25};

    cout << "Before reverse the array elements are : " << endl;
    for(auto it : arr) {
        cout << it << " ";
    }

    cout << endl;

    cout << "After reverse the array elements are : " << endl;

    reverseArray(arr);

    for(auto it : arr) {
        cout << it << " ";
    }


    return 0;
}