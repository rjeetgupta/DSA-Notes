#include <iostream>
#include <vector>
#include <utility> // for pair
using namespace std;

// It will take O(N) timecomplexity and O(1) spacecomplexity
pair<int, int> firstAndLastOccurence(vector<int> arr, int n, int target) {
    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    return {first, last}; // Returning a pair
}


// Using lower bound and Upper bound

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

pair<int, int> firstLastOccurence(vector<int> arr, int n, int target) {
    int first = lowerBound(arr, n, target);
    if(first == -1)
        return {-1, -1};
    int last = upperBound(arr, n, target);

    return {first, last - 1};
}


int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element : ";
    cin >> target;

    // Using structured binding with pair
    auto [first, last] = firstAndLastOccurence(arr, n, target);
    cout << "First occurrence: " << first << endl;
    cout << "Last occurrence: " << last << endl;

    // using lower and upper bound

    auto [first1, last1] = firstLastOccurence(arr, n, target);
    cout << "First occurrence: " << first1 << endl;
    cout << "Last occurrence: " << last1 << endl;

    return 0;
}