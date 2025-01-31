#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int> &arr, int n) {
    int sum = 0;
    int totalSum = (n * (n + 1)) / 2;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    return (totalSum - sum);
}

int main() {

    int n;
    cout << "Enter the length of an Array : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array elements btw [0, n] : " << endl;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The missing Element in the array is : " << findMissingNumber(arr, n);

    return 0;
}