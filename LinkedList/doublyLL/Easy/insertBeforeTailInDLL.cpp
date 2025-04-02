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

Node* convert2DLL(vector<int> arr) {
    int n = arr.size();
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < n; i++) {
        Node *temp = new Node(arr[i]);
        prev->next = temp;
        temp->prev = prev;
        prev = temp;
    }

    return head;
}



void print(Node* head) {
    while(head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* insertBeforeHead(Node* head, int val) {
    Node *newHead = new Node(val, head, nullptr);
    head->prev = newHead;
    return newHead;
}

Node* insertBeforeTail(Node* head, int val) {

    if(head->next == NULL) {
        insertBeforeHead(head, val);
    }

    Node *tail = head;
    while(tail->next != NULL) {
        tail = tail->next;
    }

    Node *prev = tail->prev;
    Node *newNode = new Node(val, tail, prev);

    prev->next = newNode;
    tail->prev = newNode;

    return head;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = convert2DLL(arr);
    head = insertBeforeTail(head, 4);
    print(head);

    return 0;
}