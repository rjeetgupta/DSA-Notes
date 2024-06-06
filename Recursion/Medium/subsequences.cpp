#include <bits/stdc++.h>
using namespace std;

void subsequences(int ind, vector<int> &v, int arr[], int n) {
    if(ind == n){
        for(auto it : v){
            cout << it << " ";
        }
        if(v.size() == 0){
            cout << "{}";
        }
        cout << endl;
        return;
    }
    // take or pick the particular index into the subsequence
    v.push_back(arr[ind]);
    subsequences(ind + 1, v, arr, n);
    v.pop_back();

    // not pick or not take conditions this element is not added in the subsequence
    subsequences(ind + 1, v, arr, n);
}
int main() {
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> v;
    subsequences(0, v, arr, n);
    return 0;
}