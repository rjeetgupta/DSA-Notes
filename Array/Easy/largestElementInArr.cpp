#include <iostream>
#include <vector>
using namespace std;

int findLargestElement(vector<int> & arr, int n) {

    int maxi = arr[0];

    for(int i = 0; i < n; i++) {
        if(arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    
    return maxi;
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

    cout << "The largest Element in the array is : " << findLargestElement(arr, n);

    return 0;
}