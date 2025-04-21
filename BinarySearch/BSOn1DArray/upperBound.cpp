//  Smallest Index such that arr[index] > target

#include <iostream>
#include <vector>
using namespace std;

int upperBound(vector<int> arr, int n, int target) {

    int low = 0;
    int hight = n - 1;

    while(low <= hight) {

        int mid = (low + hight) / 2;

        if(arr[mid] > target) {
            hight = mid - 1;
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

    cout << "The upper bound of the element is : " << upperBound(arr, n, target);

    return 0;
}