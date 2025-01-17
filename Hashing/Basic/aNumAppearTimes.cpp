// How many time a numbers in the array

#include <iostream>
#include <vector>
using namespace std;

// A function to find HOw many times a number appears
int findOccurrence(vector<int> arr, int number) {
    int count = 0;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == number) {
            count = count + 1;
        }
    }
    return count;
}

int main() {

    int num;
    cout << "Enter a number to find in the array : ";
    cin >> num;

    vector<int> arr = {1, 2, 1, 3, 5, 2};

    cout << num << " is present in the array " << findOccurrence(arr, num) << " times.";

    return 0;
}