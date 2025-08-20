// Stack implementation using linked list

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class StackImplementation {
    Node* top;
    int size = 0;
    public:
        StackImplementation() {
            top = NULL;
        }

        void push(int x) {
            Node* temp = new Node(x);
            temp->next = top;
            top = temp;
            size = size + 1;
        }

        int pop() {
            if (top == NULL) {
                cout << "Stack is empty" << endl;
                return -1;
            }
            int res = top->data;
            Node* temp = top;
            top = top->next;
            delete temp;
            size = size - 1;
            return res;
        }

        int peek() {
            if (top == NULL) {
                cout << "Stack is empty" << endl;
                return -1;
            }
            return top->data;
        }

        int Size() {
            return size;
        }
};

int main() {
    StackImplementation s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    cout << s.Size() << endl;
    
    return 0;
}