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


Node* convert2ToDLL(vector<int> arr) {
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


Node* deleteHeadOfDLL(Node* head) {
    if(head == NULL || head->next == NULL) {
        return NULL;
    }
    Node *prev = head;
    head = head->next;
    head->prev = nullptr;
    prev->next = nullptr;
    delete prev;
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

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};

    Node *head = convert2ToDLL(arr);
    head = deleteHeadOfDLL(head);
    print(head);

    return 0;
}