// Given the head of a singly linked list, return true if it is a palindrome or false otherwise.

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }

    Node(int x, Node* next) {
        data = x;
        this->next = next;
    }

};

Node* arrayToLinkedList(vector<int> arr) {
    int n = arr.size();
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < n; i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLinkedList(Node* head) {
    Node* mover = head;
    while (mover != NULL) {
        cout << mover->data << " ";
        mover = mover->next;
    }
}

bool isPalindromLinkedList(Node* head) {
    stack<int> st;
    Node *temp = head;
    while(temp != NULL) {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while(temp != NULL) {
        if(temp->data == st.top()) {
            st.pop();
        } else
            return false;

        temp = temp->next;
    }

    return true;
}


// Helper function

Node* reverse(Node* head) {
    Node *temp = head;
    Node *prev = NULL;
    while(temp != NULL) {
        Node *front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }

    return prev;
}

bool isPalindrome(Node* head) {
    Node *fast = head;
    Node *slow = head;

    while(fast->next != NULL && fast->next->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }

    Node *newHead = reverse(slow->next);
    fast = head;
    slow = newHead;

    while(slow != NULL) {
        if(fast->data != slow->data) {
            reverse(newHead);
            return false;
        }

        fast = fast->next;
        slow = slow->next;
    }

    reverse(newHead);
    return true;
}

int main() {
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Node* head = arrayToLinkedList(arr);

    cout << "Printing Linked List : ";
    printLinkedList(head);

    cout << endl;

    if (isPalindrome(head)) {
        cout << "Palindrome Linked List";
    } else {
        cout << "Not Palindrome Linked List";
    }

    return 0;
}