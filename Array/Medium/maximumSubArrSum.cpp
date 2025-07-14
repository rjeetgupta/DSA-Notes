#include <iostream>
#include <vector>

using namespace std;

int findMaxArraySum(vector<int> arr) {
    int n = arr.size();
    int maxi = INT16_MIN;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum = sum + arr[j];
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}

// Optimal Approach
// Kadane's Algorithms

int MaxSubArraySum(vector<int> arr) {
    int maxi = INT16_MIN;
    int sum = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum = sum + arr[i];

        if(sum > maxi) {
            maxi = sum;
        }

        if(sum < 0) {
            sum = 0;
        }
    }

    return maxi;
}

int main() {
    int n;

    cout << "Enter size of array element : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements : ";
    // Accepting array element
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Maximum sum of the array is : " << MaxSubArraySum(arr) << endl;

    return 0;
}