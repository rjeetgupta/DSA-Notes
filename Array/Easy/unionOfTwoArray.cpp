#include <iostream>
#include <vector>
#include <set>

using namespace std;

set<int> unionOfTwoArray(vector<int> arr1, vector<int>arr2, int num1, int num2) {
    set<int> st;
    for(int i = 0; i < num1; i++) {
        st.insert(arr1[i]);
    }

    for(int i = 0; i < num2; i++) {
        st.insert(arr2[i]);
    }

    return st;
}

int main() {

    int num1, num2;
    cout << "Enter size of Array1 & Array2 respectively : ";
    cin >> num1 >> num2;

    vector<int> arr1(num1), arr2(num2);

    cout << "Enter element of Array1 : " ;
    for(int i = 0; i < num1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter element of Array2 : ";
    for(int i = 0; i < num2; i++) {
        cin >> arr2[i];
    }

    cout << "Union Elements of two array, Array1 & Array2 " << endl;

    set<int> result = unionOfTwoArray(arr1, arr2, num1, num2);

    for(auto it: result) {
        cout << it << " ";
    }

    return 0;
}