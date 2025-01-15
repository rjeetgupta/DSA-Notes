#include <iostream>
using namespace std;

void printArray(int myArr[15], int size){
    cout << "Printing the array";
    for(int i = 0; i < size; i++){
        cout << myArr[i] << " " << endl;
    }
    cout << "Printing DONE" << endl;
}


int main(){
    int myArr[15] = {2, 7};
    printArray(myArr, 15);

    return 0;
}