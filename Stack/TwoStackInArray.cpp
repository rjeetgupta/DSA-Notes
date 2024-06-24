#include <bits/stdc++.h>
using namespace std;

struct TwoStack{
    int *arr, cap, top1, top2;
    TwoStack(int n){
        cap = n;
        top1 = -1;
        top2 = cap;
        arr = new int[n];
    }
    void push1(int x){
        if(top1 < top2 - 1){
            top1++;
            arr[top1] = x;
        }
    }
    
    void push2(int x){
        if(top1 < top2 - 1){
            top2--;
            arr[top2] = x;
        }
    }

    int pop1(){
        if(top1 >= 0){
            int x = arr[top1];
            top1--;
            return x;
        } else {
            exit(1);
        }
    }

    int pop2(){
        if(top2 < cap){
            int x = arr[top2];
            top2++;
            return x;
        } else {
            exit(1);
        }
    }

    int size1(){
        return top1 + 1;
    }

    int size2(){
        return cap - top2;
    }
};

int main() {
    TwoStack st(6);
    st.push1(1);
    st.push1(2);
    st.push2(3);
    st.push2(4);
    st.push1(9);
    st.push2(5);
    cout << "Top1 of the stack : " << st.top1 << endl;
    cout << "Top2 of the stack : " << st.top2 << endl;
    cout << "Size of the stack 1 : " << st.size1() << endl;
    cout << "Size of the stack 2 : " << st.size2() << endl;
    st.pop1();
    st.pop2();
    return 0;
}