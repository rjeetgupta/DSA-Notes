#include <bits/stdc++.h>
using namespace std;

void checkCaseLetter(char ch){
    if(ch >= 'A' && ch <= 'Z'){ // we can also check by function i.e isupper()
        cout << "You have entered UpperCase letter" << endl;
    }
    else if(ch >= 'a' && ch <= 'z'){ // islower()
        cout << "You have entered LowerCase letter" << endl;
    }
    else{
        cout << "You have entered wrong entry" << endl;
    }
}

int main(){
    char ch;
    cin >> ch;
    checkCaseLetter(ch);
}