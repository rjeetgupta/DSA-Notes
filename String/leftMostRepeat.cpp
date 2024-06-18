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


// Optimal Solution 1
// TC - O(n + CHAR)
// SC = O(CHAR)
const int CHAR=256;
int leftMost(string &str) 
{
    int fIndex[CHAR]={0};
    fill(fIndex,fIndex+CHAR,-1);
    int res=INT_MAX;
    for(int i=0;i<str.length();i++){
        int fi=fIndex[str[i]];
        if(fi==-1)
        fIndex[str[i]]=i;
        else
        res=min(res,fi);
    }
    
    return (res==INT_MAX)?-1:res;
}

// Optimal Solution 2
// TC - O(n + CHAR)
// SC = O(CHAR)
const int CHAR=256;
int leftMost(string &str) 
{
    bool visited[CHAR];
    fill(visited,visited+CHAR,false);
    int res=-1;
    for(int i=str.length()-1;i>=0;i--){
        if(visited[str[i]])
        res=i;
        else
        visited[str[i]]=true;
    }
    
    return res;
}

int main() {
    string str;
    cin >> str;
    
    cout << leftMostRepeatingChar(str) << endl;
    return 0;
}