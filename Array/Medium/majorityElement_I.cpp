#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Brute force solution
int FindMajorityElement(vector<int> arr) {
    int cnt = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if(arr[j] == arr[i]) {
                cnt++;
            }
        }
        if(cnt > n / 2)
            return arr[i];
    }

    return -1;
}

// Better solution
// Using Hashing
int findMajority(vector<int> arr) {
    int n = arr.size();

    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    for(auto it: mpp) {
        if(it.second > n / 2) {
            return it.first;
        }
    }

    return -1;
}

// Optimal Approache
// Using Moore's Voting Algorithms
int majority(vector<int> arr) {
    
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

    cout << "The elements which appear more than N/2 times : " << findMajority(arr) << endl;

    return 0;
}