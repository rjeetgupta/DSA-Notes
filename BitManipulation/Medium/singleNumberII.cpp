// Every number appears thrice in the array return the element which appears once in the array.

#include <iostream>
#include <vector>
#include <unordered_map>


using namespace std;

int singleNumber(vector<int> arr) {
    int n = arr.size();
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    for(auto it: mpp) {
        if(it.second == 1) {
            return it.first;
        }
    }

    return -1;
}

int singleNumbers(vector<int> arr) {
    int n = arr.size();
    int ans = 0;
    for (int bitIndex = 0; bitIndex < 31; bitIndex++) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if(arr[i] & (1 << bitIndex))
                cnt++;
        }

        if(cnt % 3 == 1) {
            ans = ans | (1 << bitIndex);
        }
    }

    return ans;
}

int singleNumberII(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();

    for (int i = 0; i < n; i += 3) {
        if(arr[i] != arr[i - 1]) {
            return arr[i - 1];
        }
    }

    return arr[n - 1];
}

int main() {

    vector<int> arr = {4, 4, 4, 6, 5, 5, 5};

    cout << "The number which appear once in the array is : " << singleNumbers(arr);

    return 0;
}