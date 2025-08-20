// Queue implementation using linked list

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

class QueueImplementUsingLL {
    Node* start = NULL;
    Node* end = NULL;
    int size = 0;

    public:
        void push(int x) {
            Node* temp = new Node(x);
            if (start == NULL) {
                start = temp;
                end = temp;
            } else {
                end->next = temp;
                end = temp;
            }
            size++;
        }

        int pop() {
            if (start == NULL) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            int res = start->data;
            Node* temp = start;
            start = start->next;
            delete temp;
            size--;
            return res;
        }

        int peek() {
            if (start == NULL) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            return start->data;
        }

        int Size() {
            return size;
        }
};

int main() {
    QueueImplementUsingLL q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    cout << q1.pop() << endl;
    cout << q1.peek() << endl;
    cout << q1.Size() << endl;

    return 0;
}