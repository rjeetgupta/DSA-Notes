#include <bits/stdc++.h>
using namespace std;

// bool areAnagram(string &str1, string &str2){
//     // Sorting takes O(nlog(n))
//     if(str1.length()!= str2.length())
//         return false;
//     sort(str1.begin(), str1.end());
//     sort(str2.begin(), str2.end());
//     return str1 == str2;
// }

// efficient solution

bool areAnagram(string &str1, string &str2){
    // it will take O(n) + O(char)
    // Space complexity is O(K)
    if(str1.length()!= str2.length())
        return false;
    int count[256] = {0};
    for(int i = 0; i < str1.length(); i++){
        count[str1[i]]++;
        count[str2[i]]--;
    }
    
    for(int i = 0; i < 256; i++){
        if(count[i]!= 0){
            return false;
        }
    }
    return true;
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    if(areAnagram(str1, str2) == true){
        cout << "String are anagrams" << endl;
    }
    else{
        cout << "String are not anagrams" << endl;
    }
    return 0;
}