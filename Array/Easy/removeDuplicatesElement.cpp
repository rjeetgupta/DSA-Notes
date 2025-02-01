#include <iostream>
#include <vector>
#include <set>

using namespace std;

set<int> revmoveDuplicatesElements(vector<int> arr, int n) {
    set<int> st;

    for(int i = 0; i < n; i++) {
        st.insert(arr[i]);
    }

    return st;
}

int removeDuplicate(vector<int> &arr, int n) {
    int j = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[j]) {
            arr[j + 1] = arr[i];
            j++;
        }
    }

    return j + 1;
}


int main() {

    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "After moving the zero to end, The array elements are : " << endl;
    
    // set<int> result = revmoveDuplicatesElements(arr, n);

    // for(auto it : result) {
    //     cout << it << " " ;
    // }
    
    int size = removeDuplicate(arr, n);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " " ; 
    }

    return 0;
}