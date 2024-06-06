#include <iostream>
#include <climits>
using namespace std;

int getMax(int myArr[], int n) {

    int maximum = INT_MIN;

    for(int i = 0; i < n; i++) {
        maximum = max(maximum, myArr[i]);

        // if(myArr[i] > max) {
        //     max = myArr[i];
        // }
    }

    // returning max
    return maximum;
}

int getMin(int myArr[], int n) {

    int minimum = INT_MAX;

    for(int i = 0; i < n; i++) {
        minimum = min(minimum, myArr[i]);

        // if(myArr[i] < min){
        //     min = myArr[i];
        // }
    }

    // returning min
    return minimum;
}


int main(){

    int size;
    cin >> size;

    // int myArr[size] => Bad practice, don't do that

    // taking input of an array
    int myArr[100];
    for(int i = 0; i < size; i++) {
        cin >> myArr[i];
    }

    cout << "Maximum Value is : " << getMax(myArr, size) << endl;
    cout << "Minimum Value is : " << getMin(myArr, size) << endl;

    return 0;
}