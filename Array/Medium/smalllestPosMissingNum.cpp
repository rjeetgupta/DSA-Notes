#include <bits/stdc++.h>
using namespace std;

// Naive solution - By Sorting - O(n*log n) Time and O(n) Space

int findMissingNum(vector<int> &arr) {
    sort(arr.begin(), arr.end());

    int result = 1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == result) {
            result++;
        }
        else if(arr[i] > result) {
            break;
        }
    }
    return result;
}

// Using visited array that takes O(N) and space O(N)

int misssingNumber(vector<int> &arr) {
    int n = arr.size();

    vector<bool> vis(n, false);
    for(int i = 0; i < n; i++) {
        // if element is btw (1 - n) mark it visited
        if(arr[i] > 0 && arr[i] <= n) {
            vis[arr[i] - 1] = true;
        }
        
    }

    // Find the first unvisited array element in the original array
    for(int i = 1; i <= n; i++) {
        if(!vis[i - 1]) {
            return i;
        }
    }

    // if all element are visited then (n + 1) will be the visited element
    return n + 1;
}


// 

int missingPositiveNum(vector<int> &arr) {
    int n = arr.size();
    bool flag = false;

    // check 1 is present in the array or not
    for(int i = 0; i < n; i++) {
        if(arr[i] == 1) {
            flag = true;
            break;
        }
    }
    // if 1 is not present 
    if(flag == false) {
        return 1;
    }

    // Change the value of array element which is greater than n to 1's
    for(int i = 0; i < n; i++) {
        if(arr[i] <= 0 || arr[i] > n) {
            arr[i] = 1;
        }
    }

    // Mark the occurrence of numbers 
    // directly within the same array
    for(int i = 0; i < n; i++) {
        arr[(arr[i] - 1) % n] += n;
    }

    // finding which index value has less than n
    for (int i = 0; i < n; i++) {
        if (arr[i] <= n)
            return i + 1;
    }

    return n + 1;

}


int main() {
    
    vector<int> arr = {2, -3, 4, 1, 1, 7};

    cout << findMissingNum(arr) << endl;
    cout << misssingNumber(arr) << endl;
    cout << missingPositiveNum(arr) << endl;

    return 0;
}