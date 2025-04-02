#include <iostream>
#include <vector>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;

    public:
        Node(int data1, Node* next1, Node* prev1) {
            data = data1;
            next = next1;
            prev = prev1;
        }
    public:
        Node(int data1) {
            data = data1;
            next = nullptr;
            prev = nullptr;
        }
};


Node* arrayToDLL(vector<int> arr) {
    int n = arr.size();
    Node *head = new Node(arr[0]);
    Node *prev = head;;
    for (int i = 1; i < n; i++) {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        temp->prev = prev;
        prev = temp;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = arrayToDLL(arr);
    print(head);
}