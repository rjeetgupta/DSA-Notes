#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[], int n){

    for(int i = 0; i < n; i+=2) {
        if(i+1 < n) {
        swap(arr[i], arr[i + 1]);
        }
    }

}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int size;
    cout << "Enter array size : ";
    cin >> size;

    int arr[100];
    for(int i = 0; i < size; i++) {
    cin >> arr[i];
    }


    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    swapAlternate(arr, size);

    cout << " After Swapping elements are : "  ;

    printArray(arr, size);


    return 0;
}


// 1. How to initialize entire array with any number except 0.
// 2. Swap alternate array. eg(1, 2, 3, 4, 5, 6) => {2, 1, 4, 3, 6, 5}
// 3. Find Unique element in an array.
// 4. Find dublicate element in array.  eg. (1, 2, 3 , 5, 6, 2) => 2
// 5. Find array Intersection => {1, 2, 3, 4} & {2, 4, 6, 8} => {2, 4}
// 6. find set bit of 1 i.e How many once . eg = 5 => 101 = 2 1's
