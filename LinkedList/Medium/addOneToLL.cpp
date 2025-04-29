#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    
    public:
        Node(int data1, Node *next1){
            data = data1;
            next = next1;
        }

        Node(int data1){
            data = data1;
            next = nullptr;
        }
};

Node* convertArrayToLL(vector<int> &arr) {
    int n = arr.size();
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < n; i++) {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void print(Node* head) {
    Node *temp = head;
    while(head != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}


Node* reverseLinkedList(Node* head) {

    if(head == NULL || head->next == NULL) {
        return head;
    }

    Node *newHead = reverseLinkedList(head->next);
    Node *front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}


Node* addOneToLL(Node* head) {
    head = reverseLinkedList(head);
    Node *temp = head;
    int carry = 0;
    while(temp != NULL) {
        temp->data = temp->data + carry;
        if(temp->data < 10) {
            carry = 0;
            break;
        }
        else {
            temp->data = 0;
            carry = 1;
        }
        temp = temp->next;
    }

    if(carry == 1) {
        Node *newNode = new Node(1);
        head = reverseLinkedList(head);
        newNode->next = head;
        return newNode;
    }

    head = reverseLinkedList(head);
    return head;
}


int addHelper(Node* temp) {
    if(temp == NULL) {
        return 1;
    }

   int carry = addHelper(temp->next);
    temp->data = temp->data + carry;

    if(temp->data < 10) {
        return 0;
    }

    temp->data = 0;

    return 1;
}


Node* addOneToLinkedList(Node* head) {
    int carry = addHelper(head);
    if(carry == 1) {
        Node *newNode = new Node(1);
        newNode->next = head;
        return newNode;
    }
    return head;
}


int main() {

    vector<int> arr = {1, 2, 3, 4};
    Node *head = convertArrayToLL(arr);
    head = addOneToLinkedList(head);
    print(head);

    return 0;
}