/*
    Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

    Implement the MinStack class:

    MinStack() initializes the stack object.
    void push(int val) pushes the element val onto the stack.
    void pop() removes the element on the top of the stack.
    int top() gets the top element of the stack.
    int getMin() retrieves the minimum element in the stack.
    You must implement a solution with O(1) time complexity for each function.

*/

#include <iostream>
#include <stack>
#include <climits>
using namespace std;


class MinStack {
public:
    // first will store the element and second one will store min el
    stack<pair<int, int>> st;
    void push(int val) {
        if(st.empty()) {
            st.push({val, val});
        } else {
            st.push({val, min(val, st.top().second)});
        }
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

// Optimized way to solve the problems
class MinStacks {
    stack<int> st;
    int mini = INT_MAX;

    public: 
        void Push(int val) {
            if(st.empty()) {
                mini = val;
                st.push(val);
            } else {
                if(val > mini) {
                    st.push(val);
                } else {
                    st.push(2 * val - mini);
                    mini = val;
                }
            }
        }

        void Pop() {
            if(st.empty()) return;
            
            int x = st.top();
            st.pop();
            // if it is the modified value
            if(x < mini) mini = 2 * mini - x;
        }

        int Top() {
            if(st.empty());

            int x = st.top();
            if(mini < x) return x;

            return mini;
        }

        getMin() {
            return mini;
        }
};

int main() {

    MinStacks* obj = new MinStacks();
    obj->Push(-2);
    obj->Push(0);
    obj->Push(-3);
    cout << obj->getMin();

    return 0;
}