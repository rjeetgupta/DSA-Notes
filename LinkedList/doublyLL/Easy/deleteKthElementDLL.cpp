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

void print(Node* head) {
    while(head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
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

Node* deleteTailOfDLL(Node* head) {
    if(head == NULL || head->next == NULL) {
        return NULL;
    }

    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    Node *newTail = temp->prev;
    newTail->next = nullptr;
    temp->prev = nullptr;

    delete temp;

    return head;
}

Node* deleteKthElementOfDLL(Node* head, int k) {
    if(head == NULL) {
        return NULL;
    }

    int cnt = 0;
    Node *temp = head;
    while(temp != NULL) {
        cnt++;
        if(cnt == k)
            break;
        temp = temp->next;
    }

    Node *prev = temp->prev;
    Node *front = temp->next;

    if(prev == NULL && front == NULL) {
        return NULL;
    } else if(prev == NULL) {
        return deleteHeadOfDLL(head);
    } else if(front == NULL) {
        deleteTailOfDLL(head);
    }

    prev->next = front;
    front->prev = prev;

    temp->next = nullptr;
    temp->prev = nullptr;

    delete temp;

    return head;
}


int main() {

    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convert2ToDLL(arr);
    head = deleteKthElementOfDLL(head, 3);
    print(head);

    return 0;
}