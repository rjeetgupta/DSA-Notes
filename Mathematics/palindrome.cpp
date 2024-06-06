#include <iostream>
using namespace std;

void checkPalindrome(int num){
    int temp = num;
    int revNum = 0;
    while(num > 0){
        int lastDigit = num % 10;
        revNum = (revNum * 10) + lastDigit;
        num = num / 10;
    }

    if(temp == revNum){
        cout << temp << " is a Palindrome number" << endl;
    }
    else{
        cout << temp << " is not a Palindrome number" << endl;
    }
}

int main(){
    int num;
    cin >> num;
    checkPalindrome(num);
}