#include <iostream>
#include <vector>
using namespace std; 
 
    void merge_sort(vector<int> &arr, int low, int mid, int high) { 
        vector<int> temp; 
    
        int left = low; 
        int right = mid + 1; 
        while(left <= mid && right <= high ){ 
            if(arr[left] <= arr[right]){ 
                temp.push_back(arr[left]); 
                left++; 
            } 
            else{ 
                temp.push_back(arr[right]); 
                right++; 
            } 
        }
        // If anything in the left
        while(left <= mid){ 
            temp.push_back(arr[left]); 
            left++; 
        }
        // If anything in the right
        while(right <= high){ 
            temp.push_back(arr[right]); 
            right++; 
        } 

        // Storing the main array from temp array
        for(int i = low; i <= high; i++){ 
            arr[i] = temp[i - low]; 
        } 
    } 
    
    
    void mS(vector<int> &arr, int low, int high){ 
        // Base Case
        if(low >= high){ 
            return; 
        } 
        int mid = (low + high) / 2; 
        mS(arr, low, mid); 
        mS(arr,  mid+1, high); 
        merge_sort(arr, low, mid, high); 
    } 
    
    void mergesort(vector<int> & arr, int n ){ 
        mS(arr, 0, n-1); 
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
 
    mergesort(arr,  n);

    cout << "After Sorting the array : " << endl;
 
    for(int i = 0; i < n; i++){ 
        cout << arr[i] << " "; 
    } 
    cout << endl; 
    return 0; 
}