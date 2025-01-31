#include <iostream>
#include <vector>
using namespace std;

int findSecondLargest(vector<int> & arr, int n) {

    if(n < 2) {
        return -1;
    }

    int maxi = arr[0];
    int secondLargest = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] > maxi) {
            secondLargest = maxi;
            maxi = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != maxi) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
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

    cout << "The second largest Element in the array is : " << findSecondLargest(arr, n);

    return 0;
}