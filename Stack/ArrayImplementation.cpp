#include <bits/stdc++.h>
using namespace std;

class StackImplementation{
    int top = -1;
    int st[10];

    public:
    void push(int x){
        if(top >= 10){
            cout << "Stack is full" << endl;
            return;
        }
        top = top + 1;
        st[top] = x;
    }

    int topp(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return st[top];
    }

    int pop(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return -1;
        }
        return st[top - 1];
    }
};

int main() {
    StackImplementation st;
    st.push(10);
    st.push(20);
    cout << st.topp() << endl;
    cout << st.pop() << endl;
    cout << st.topp() << endl;
    return 0;
}