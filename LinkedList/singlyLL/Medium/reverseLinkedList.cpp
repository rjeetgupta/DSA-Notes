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

};

Node* arrayToLinkedList(vector <int> arr) {
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

// Printing Linked List

void printLinkedList(Node* head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node* reverseLinkedList(Node* head) {
    stack<int> st;
    Node *temp = head;

    // store the data into stack
    while(temp != NULL) {
        st.push(temp->data);
        temp = temp->next;
    }

    // storing the data into linked list from stack
    temp = head;
    while(temp != NULL) {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }

    return head;
}

// Optimized way to reverse linked list
Node* reverseLL(Node* head) {

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

    Node *reverseLL = reverseLinkedList(head);

    cout << "Reverse Linked List : ";
    printLinkedList(reverseLL);

    return 0;
}