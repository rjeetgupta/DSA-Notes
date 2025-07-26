// Given the head of a singly linked list, return the middle node of the linked list.

#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// construct the Linked List

Node* arrayToLinkedList(vector<int> arr) {
    int n = arr.size();
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < n; i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLinkedList(Node* head) {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// find the middle element

int findMiddle(Node* head) {
    if(head == NULL) {
        return 0;
    }

    // traverse the Linked List
    int cnt = 0;
    Node *temp = head;
    while(temp != NULL) {
        cnt += 1;
        temp = temp->next;
    }

    // find the middle
    int middle = (cnt / 2) + 1;
    temp = head;
    while(temp != NULL) {
        middle = middle - 1;
        if(middle == 0) {
            break;
        }
        temp = temp->next;
    }

    return temp->data;
}

// Optimized it using slow and fast pointer

int middleNode(Node* head) {
    Node *slow = head, *fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
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
    
    cout << "Middle of the linked list is : " << middleNode(head);

    return 0;
}