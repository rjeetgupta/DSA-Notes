/* 
    Return the frequency of array element. Array ranges from 1 to n. 

    Input: arr[] = [2, 3, 2, 3, 5]
    Output: [0, 2, 2, 0, 1]
    Explanation: We have: 1 occurring 0 times, 2 occurring 2 times, 3 occurring 2 times, 4 occurring 0 times, and 5 occurring 1 time.

*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> frequencyCount(vector<int> & arr) {
    int n = arr.size();

    // for storing the answer
    vector<int> ans(n, 0);

    map<int, int> mpp;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= 1 && arr[i] <= n)
            mpp[arr[i]]++;
    }

    for(int i = 1; i <= n; i++) {
        ans[i-1] = mpp[i];
    }

    return ans;

}

int main() {

    vector<int> arr = {2, 3, 2, 3, 5, 10};

    vector<int> result =  frequencyCount(arr);

    for(auto it : result) {
        cout << it << endl;
    }

    return 0;
}