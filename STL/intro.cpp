#include <bits/stdc++.h>
using namespace std;

/*
struct node {
    string str;
    int num;
    double doub;
    char x;
    
    node(str_, num_, doub_, x_){
        str = str_;
        num = num_;
        doub = doub_;
        x = x_;
    }
};

*/

int main(){

    /*
    double val = 10.0;
    cout << val << endl; // print 10.0

    int double char

        // create a data type where you store
        {string, int, double, char}

    // wrong way of defining
    node raj;
    raj.str = "striver";
    raj.num = 79;
    raj.doub = 91.0;

    node raj = new node("striver", 79, 91.0, "");

    */

    // Array -> int arr[100];

    array<int, 3> arr;  // -> {?, ?, ?} i.e garbage value

    // if we define it globally then it will store all zero

    array<int, 5> arr = {1, 5, 6}; // -> {1, 5, 6, 0, 0}

    // initialize all the array element with zero
    array<int, 4> arr = {0};

    // fill() fill all the element with same no
    array<int, 4> arr;
    arr.fill(10);   // -> {10, 10, 10, 10}

    // arr.at(index) => it will return the element present on that index
    for (int i = 0; i < 5; i++)
    {
        cout << arr.at(i) << " ";
    }

    // iterator
    // begin(), end(), rbegin(), rend()

    // begin() -> start
    // rbegin() -> end of the array
    // end() -> rightward of end i.e empty 
    // rend() -> right before the start

    array<int, 5> arr = {1, 3, 5, 4, 9};
    for (auto it: arr.begin(); it != arr.end(); it++) {
        cout << *it << " ";
    }

    for (auto it : arr.rbegin();it!=arr.rend();it++)
}