#include <bits/stdc++.h>
using namespace std;

struct MyStack{
    vector<int> v;
    void push(int x){
        v.push_back(x);
    }

    int pop(){
        int res = v.back();
        v.pop_back();
        return res;
    }
    
    int size(){
        return v.size();
    }

    bool isEmpty(){
        return v.empty();
    }
};

int main() {
    MyStack st;
    st.push(4);
    st.push(8);
    st.push(10);
    st.push(29);
    cout << st.pop() << endl;
    cout << st.size() << endl;
    cout << st.isEmpty() << endl;
    return 0;
}