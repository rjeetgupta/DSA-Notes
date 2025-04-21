// smallest index such that arr[index] >= target

#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> arr, int n, int target) {
    int low = 0;
    int high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] >= target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return low;
}


int main() {

    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element : ";
    cin >> target;

    cout << "The lower bound of the element is : " << lowerBound(arr, n, target);

    return 0;
}