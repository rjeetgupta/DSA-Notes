#include<iostream>
using namespace std;

char toLowercase(char ch){
    return ch - 'A' + 'a';
}

int main(){
    char ch;

    cout << "Enter a uppercase Character : ";
    cin >> ch;

    cout << "Converted lower case character is : " << toLowercase(ch);
    return 0;
}