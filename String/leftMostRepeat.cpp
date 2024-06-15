#include <bits/stdc++.h>
using namespace std;

// int leftMostRepeatingChar(string &str){
//     // Time Complexity O(n^2)
//     for(int i=0; i<str.length(); i++){
//         for(int j=i+1; j<str.length(); j++){
//             if(str[i] == str[j]){
//                 return i;
//             }
//         }
//     }
// }

// Better solution
const int CHAR = 256;
int leftMostRepeatingChar(string &str){
    // Time Complexity O(2n)
    // Space Complexity O(CHAR)
    int count[CHAR] = {0};
    for (int i = 0; i < str.length(); i++){
        count[str[i]]++;
    }

    for (int i = 0;  i < str.length(); i++){
        if(count[str[i] > 2])
            return i;
        return -1;
    }
}

int main() {
    string str;
    cin >> str;
    
    cout << leftMostRepeatingChar(str) << endl;
    return 0;
}