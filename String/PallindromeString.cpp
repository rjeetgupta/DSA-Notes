#include<iostream>
using namespace std;

int getLength(string str){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++){
        count = count + 1;
    }
    return count;
}

bool pallindrome(string str, int n){
    int start = 0;
    int end = n - 1;
    while(start <= end){
        if(str[start] != str[end]){
            return false;
        }
        else{
            start++;
            end--;
        }
    }
    return true;
}

int main(){
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    int len = getLength(str);

    if(pallindrome(str, len) == true){
        cout << "String is Pallindrome" << endl;
    }
    else{
        cout << "String is not Pallindrome" << endl;
    }
    return 0;
}