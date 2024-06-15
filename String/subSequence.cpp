#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string &str1, string &str2, int n, int m){
    // int j = 0;
    // if(n < m) return false;
    // for (int i = 0; i < n && j < m; i++){
    //     if(str1[i] == str2[j]){
    //         j++;
    //     }
    //     return (j == m);
    // }

    // Recursive solution

    if(m == 0)
        return true;
    if(n == 0) return false;
    if(str1[n - 1] == str2[m - 1]){
        return isSubsequence(str1, str2, n - 1, m - 1);
    }
    else{
        return isSubsequence(str1, str2, n - 1, m);
    }
}

int main(){
    string str1, str2;
    cout << "Enter a string : ";
    getline(cin, str1);
    cout << "Enter another string : ";
    getline(cin, str2);

    if(isSubsequence(str1, str2, str1.length() -1, str2.length() - 1) == true){
        cout << str2 << " is a subsequence of " << str1 << endl;
    }
    else{
        cout << str2 << " is not a subsequence of " << str1 << endl;
    }


    return 0;
}