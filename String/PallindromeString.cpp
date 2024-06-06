#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++){
        count = count + 1;
    }
    return count;
}

bool pallindrome(char name[], int n){
    int start = 0;
    int end = n - 1;
    while(start <= end){
        if(name[start] != name[end]){
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
    char name[20];
    cout << "Enter your name : ";
    cin >> name;

    int len = getLength(name);

    cout << "String is Pallindrome or not : " << pallindrome(name, len);
    return 0;
}