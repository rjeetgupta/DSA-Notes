// Using Hashing find the numbers of times How many times a numbers appears in the array

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "How many element in the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the array elements : ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Pre computation
    int hash[1000] = {0};
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int numbers;
    cout << "How many element do you want to search : ";
    cin >> numbers;

    cout << "Enter the array elements to find : ";
    while(numbers--) {
        int num;
        cin >> num;

        // Fetching
        cout << hash[num] << endl;
    }
}