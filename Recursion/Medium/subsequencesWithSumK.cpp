#include <bits/stdc++.h>
using namespace std;

// void subsequencesWithSumK(int ind, vector<int> &ds, int k, int sum, int arr[], int n) {
//     if(ind == n){
//         if(k == sum){
//             for(auto it : ds) cout << it << " ";
//             cout << endl;
//         }
//         return;
//     }
//     ds.push_back(arr[ind]);
//     k += arr[ind];

//     subsequencesWithSumK(ind+1, ds, k, sum, arr, n); 
//     k -= arr[ind];
//     ds.pop_back();
//     // not pick
//     subsequencesWithSumK(ind+1, ds, k, sum, arr, n);
// }


// Modified code
bool subsequencesWithSumK(int ind, vector<int> &ds, int k, int sum, int arr[], int n) {
    // condition satisfied
    if(ind == n){
        if(k == sum){
            for(auto it : ds) cout << it << " ";
            cout << endl;
            return true;
        }
        // condition not satisfied
        else return false;
    }
    ds.push_back(arr[ind]);
    k += arr[ind];

    if(subsequencesWithSumK(ind+1, ds, k, sum, arr, n) == true) {
        return true;
    }
    k -= arr[ind];
    ds.pop_back();
    // not pick
    if(subsequencesWithSumK(ind+1, ds, k, sum, arr, n) == true) return true;
    return false;
}
int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    subsequencesWithSumK(0, ds, 0, sum, arr, n);
    return 0;
}