#include <bits/stdc++.h>
using namespace std;


/*
// TC = O(n^3)
bool areDistinct(string str, int i, int j){
    vector<bool> visted(256);
    for (int k = i; k < j; k++){
        if(visted[str[k] == true]){
            return false;
        }
        visted[str[k]] = true;
    }
    return true;
}

int longestDistinctString(string str){
    int n = str.length();
    int res = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if(areDistinct(str, i, j)){
                res = max(res, j - i + 1);
            }
        }
    }
        return res;
}
*/

// =================================================================
// TC = O(n^2)
// int longestDistinctString(string str){
//     int n = str.length();
//     int res = 0;
//     for (int i = 0; i < n; i++){
//         vector<bool> visted(256);
//         for (int j = i; j < n; j++){
//             if(visted[str[j]] == true){
//                 break;
//             }
//             else{
//                 res = max(res, j - i + 1);
//                 visted[str[j]] == true;
//             }
//         }
//     }
//     return res;
// }


// ======================================================================
// TC = O(n)
int longestDistinctString(string str){
    int n = str.length();
    int res = 0;
    vector<int> prev(256, -1);
    int i = 0;
    for(int j = 0; j < n; j++){
        i = max(i, prev[str[j]] + 1);
        int maxEnd = j - i + 1;
        res = max(res, maxEnd);
        prev[str[j]] = j;
    }
    return res;
}

int main() {
    string str;
    cout << "Enter a string : " ;
    cin >> str;
    cout << "Longest substring  : " << longestDistinctString(str) << endl;
    return 0;
}