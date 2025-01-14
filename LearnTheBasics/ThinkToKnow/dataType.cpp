// Data Type - Character, Integer, Long, Float and Double

#include <iostream>
using namespace std;

int findDatyeSize(string str) {
    if(str == "Character" || str == "Boolean") {
        return sizeof(char);
    } else if(str == "Integer" || str == "Float") {
        return sizeof(int);
    } else if(str == "Double" || str == "Long") {
        return sizeof(double);
    } else {
        return -1;
    }
}

int main() {

    string str;

    cout << "Enter the data type name to find size : ";
    cin >> str;

    cout << "The size of " << str << " is : " << findDatyeSize(str);

    return 0;
}