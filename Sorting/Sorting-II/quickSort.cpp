#include <iostream>
#include <vector>
using namespace std; 
 
int Partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j) {
        // It will check the which one is greater than the pivot
        while(arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        // It will check the which one is lesser than pivot
        while(arr[j] > pivot && j >= low + 1) {
            j--;
        }

        if(i < j) {
            swap(arr[i], arr[j]);
        }

    }
    swap(arr[low], arr[j]);

    return j;
}

void quickSort(vector<int> &arr, int low, int high) {

    if(low < high) {
        int partitionIndex = Partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}
 
 
int main(){ 
    int n;
    
    cout << "Enter the array size : ";
    cin >> n; 
 
    vector<int> arr(n); 

    cout << "Enter the array elements : " << endl;
 
    for(int i = 0; i < n; i++){ 
        cin >> arr[i]; 
    } 
 
    quickSort(arr, 0, n - 1);

    cout << "After Sorting the array : " << endl;
 
    for(int i = 0; i < n; i++){ 
        cout << arr[i] << " "; 
    } 
    cout << endl; 
    return 0; 
}