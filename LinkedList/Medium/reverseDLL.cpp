#include <iostream>
#include <vector>
#include <stack>

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
        Node *temp = new Node(arr[i], nullptr, nullptr);
        prev->next = temp;
        temp->prev = prev;
        prev = temp;
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

Node* reverseDLL(Node* head) {
    Node *temp = head;
    stack<int> st;

    while(temp != NULL) {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while(temp != NULL) {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }

    return head;
}

// Optimized way

Node* reverseDLLOptimized(Node* head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }

    Node *prev = NULL;
    Node *current = head;

    while(current != NULL) {
        prev = current->prev;

        current->prev = current->next;
        current->next = prev;

        current = current->prev;
    }

    return prev->prev;
}



int main() {

    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = convert2DLL(arr);
    head = reverseDLLOptimized(head);
    print(head);

    return 0;
}