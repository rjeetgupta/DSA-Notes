#include<bits/stdc++.h>
using namespace std;
// int main(){
    // string str;
    // getline(cin, str);
    // cout << str;

    // string str;
    // getline(cin, str);
    // cout << str;

    // int arr[10];
    // int sum = 0;
    // for (int i = 0; i < 4; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     sum += arr[i];
    // }
    // cout << "Sum is : " << sum << endl;

//     return 0;
// }

    void sum(int arr[], int len){
        int sum = 0;
        for (int i = 0; i < len; i++){
            sum += arr[i];
        }
        cout << "Sum of all the number is : " << sum;
    }
    
    int main(){
        int size = 10;
        int arr[10];
        for (int i = 0; i < 10; i++)
        {
            cin >> arr[i];
        }

        sum(arr, size);

        return 0;
    }
