#include <bits/stdc++.h>
using namespace std;

int subsequencesWithSumK(int ind, int k, int sum, int arr[], int n) {
    // condition not satisfied
    // strictly done if array contains positives only
    if(k > sum) return 0;
    
    // condition satisfied
    if(ind == n){
        if(k == sum){
            return 1;
        }
        // condition not satisfied
        else return 0;
    }
    // pick
    k += arr[ind];

    int l = subsequencesWithSumK(ind+1, k, sum, arr, n) ;
    k -= arr[ind];

    // not pick
    int r = subsequencesWithSumK(ind+1, k, sum, arr, n);
    return l + r;
}
int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;

    cout << subsequencesWithSumK(0, 0, sum, arr, n);
    return 0;
}