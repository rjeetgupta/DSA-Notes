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

Node* insertBeforeHead(Node* head, int val) {
    Node *newHead = new Node(val, head, nullptr);
    head->prev = newHead;
    return newHead;
}


Node* insertBeforeKthElement(Node* head, int k, int val) {
    if(k == 1) {
        return insertBeforeHead(head, val);
    }
    Node *temp = head;
    int cnt = 0;
    while(temp != NULL) {
        cnt++;
        if(cnt == k)
            break;
        temp = temp->next;
    }
    Node *prev = temp->prev;
    Node *newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->prev = newNode;

    return head;
}



void print(Node* head) {
    while(head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = convert2DLL(arr);
    head = insertBeforeKthElement(head, 3, 15);
    print(head);

    return 0;
}