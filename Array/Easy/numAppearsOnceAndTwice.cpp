// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

#include <iostream>
#include <vector>

using namespace std;

int findSingleNumber(vector<int> arr, int n) {
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                cnt++;
            }
        }
    }
}


int main() {

    int n;
    cout << "Enter the length/size of the array : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array elements :  " << endl;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }



        return 0;
}