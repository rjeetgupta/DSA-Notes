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


// This code is not working for before head question.
void insertBeforeNode(Node* head, int val) {
    Node *prev = head->prev;
    Node *newNode = new Node(val, head, prev);
    prev->next = newNode;
    head->prev = newNode;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = convert2DLL(arr);
    insertBeforeNode(head->next->next, 15);
    print(head);

    return 0;
}