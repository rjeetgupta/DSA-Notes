#include <bits/stdc++.h>
using namespace std;

string revmoveDuplicate(string str) {
    set<string>  ans;
    for(int i = 0 ; i < str.length() ; i++) {
        ans.insert(str[i]);
    }
    return ans;
}

int main() {
    string str;
    cout << "Enter a string : ";
    cin >> str;
    cout << revmoveDuplicate(str);
    return 0;
}