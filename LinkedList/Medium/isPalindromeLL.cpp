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


bool isPalindromLL(Node* head) {
    stack<int> st;

    if(head == NULL || head->next == NULL) {
        return true;
    }

    Node *temp = head;

    // Storing the data into the stack data Structure to compare
    while(temp != NULL) {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;

    // Here We are comparing, Once it is not match with LL data return false
    while(temp != NULL) {
        if(temp->data != st.top())
            return false;
        temp = temp->next;
        st.pop();
    }
    return true;
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


bool isPalindromLinkedList(Node* head) {

    if(head == NULL || head->next == NULL) {
        return true;
    }

    Node *fast = head;
    Node *slow = head;

    while(fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* newHead = reverseLinkedList(slow->next);

    Node *first = head;
    Node *second = newHead;

    while(second != NULL) {
        if(first->data != second->data) {
            reverseLinkedList(newHead);
            return false;
        }
        first = first->next;
        second = second->next;
    }

    reverseLinkedList(newHead);
    return true;
}


int main() {

    vector<int> arr = {1, 2, 3, 2, 1};
    Node *head = convertArrayToLL(arr);
    if (isPalindromLinkedList(head)) {
        cout << "Palindrome Linked List" << endl;
    } else {
        cout << "Not Palindrome Linked List" << endl;
    }

    return 0;
}