// Stack implementation using queue

#include <iostream>
#include <queue>
using namespace std;

class Stack {
    public:
        queue<int> q;
        void push(int x) {
            int s = q.size();
            q.push(x);
            for(int i = 1; i <= s; i++) {
                q.push(q.front());
                q.pop();
            }
        }
        void pop() {
            q.pop();
        }
        int top() {
            return q.front();
        }
        bool empty() {
            return q.empty();
        }
};


int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    
    return 0;
}