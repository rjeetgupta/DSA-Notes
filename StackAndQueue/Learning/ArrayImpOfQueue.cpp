#include <iostream>
using namespace std;

class QueueImplementation {
    int size = 10;
    int arr[10];
    int currentSize = 0;
    int start = -1, end = -1;

    public:

        void push (int x) {
            if(currentSize == size) {
                cout << "Queue is full" << endl;
                return;
            } else {
                if(currentSize == 0) {
                    start = 0;
                    end = 0;
                } else {
                    end = (end + 1) % size;
                }
                arr[end] = x;
                currentSize++;
            }
        }

        int pop() {
            if(currentSize == 0) {
                cout << "Queue is empty" << endl;
                return 0;
            } else if(currentSize == 1) {
                start = -1;
                end = -1;
                currentSize--;
                return arr[start];
            } else {
                start = (start + 1) % size;
                currentSize--;
                return arr[start];
            }
        }

        int top() {
            if(currentSize == 0) {
                cout << "Queue is empty" << endl;
                return -1;
            } else {
                return arr[start];
            }
        }

        int Size() {
            return currentSize;
        }

};

int main() {

    QueueImplementation q1;

    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    cout << q1.pop() << endl;
    cout << q1.top() << endl;
    cout << q1.Size() << endl;

}