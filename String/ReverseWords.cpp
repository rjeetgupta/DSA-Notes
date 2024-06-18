#include <bits/stdc++.h>
using namespace std;

/*
    1. Create a stack
    2. Push words into the stack one by one
    3. Pop words from the stack and append into the string
*/

// string reverseWords(string &str){
//     stack<string> st;
//     string reverseString = "";
//     for (int i = str.length() - 1; i >= 0; i++){
//         st.push(str[i]);
//     }
//     for (int i = 0; i < st.size() - 1; i++){
//         reverseString += st.pop();
//     }
// }


string reverseCurrentWords(string str){
        int n = str.length() - 1;
        string reverseResult = "";
        for(int i = n; i >= 0; i--){
            reverseResult += str[i];
        }
        return reverseResult;
    }

string reverseWords(string &str){
    int n = str.length() - 1;
        string reverseString = "";
        string currentChar = "";
        for(int i = n; i >= 0; i--){
            if(str[i] == '.'){
                reverseString += reverseCurrentWords(currentChar) + ".";
                currentChar = "";
            }
            else{
                currentChar += str[i];
            }
        }
        return reverseString + currentChar;
}

int main() {

    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    cout << "Reverses words : " << endl;
    cout << reverseWords(str);

    return 0;
}