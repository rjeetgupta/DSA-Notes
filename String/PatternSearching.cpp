#include <bits/stdc++.h>
using namespace std;


// TC --> O(n-m +1) * m  SC --> O(1)
// void patSearching(string & text, string & pat) {
//     int n = text.length();
//     int m = pat.length();
//     for (int i = 0; i <= n - m; i++){
//         int j;
//         for( j = 0; j < m; j++){
//             if(pat[j] != text[i+j]){
//                 break;
//             }
//         }
//         if(j == m){
//                 cout << i << " ";
//         }
//     }
// }

// =========================================================================
// TC --> O(n)       SC --> O(1)
void patSearching(string & text, string & pat){
    int n = text.length();
    int m = pat.length();
    for (int i = 0; i <= n - m; ){
        int j;
        for( j = 0; j < m; j++){
            if(pat[j] != text[i+j]){
                break;
            }
        }
        if(j == m){
                cout << i << " ";
        }
        if(j == 0)
            i++;
        else
            i = i + j;
    }
}


int main() {
    string text, pat;
    cout << "Enter the text : ";
    cin >> text;

    cout << "Enter the pattern : ";
    cin >> pat;

    patSearching(text, pat);
    return 0;
}