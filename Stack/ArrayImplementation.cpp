#include <bits/stdc++.h>
using namespace std;

struct MyStack{
    int *arr;
    int cap;
    int top;
    MyStack(int c){
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int x){
        top++;
        arr[top] = x;
    }

    int pop(){
        int res = arr[top];
        res--;
        return res;
    }

    int peek(){
        return arr[top];
    }

    int size(){
        return (top + 1);
    }

    bool isEmpty(){
        return (top == -1);
    }
};

int main() {

    MyStack st(5);
    st.push(5);
    st.push(10);
    st.push(20);

    cout << st.pop() << endl;
    cout << st.size() << endl;
    cout << st.peek() << endl;
    cout << st.isEmpty() << endl;
    return 0;
}