#include <iostream>
using namespace std;

void arrayUpdate(int arr[], int n) {

    cout << "Inside the function" << endl;

    // updating array
    arr[0] = 15;

    // printing the array
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;

    cout << "Going back to main function" << endl;
}

int main() {
    int arr[3] = {2, 5, 8};

    arrayUpdate(arr, 3);

    // printing the array
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}