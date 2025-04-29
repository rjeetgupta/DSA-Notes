#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct Node {
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

Node* reverseLL(Node* head) {

    stack<int> st;

    // If LL is empty or only one element.
    if(head == NULL || head->next == NULL) {
        return head;
    }

    Node *temp = head;

    // Storing the data into stack data structure
    while(temp != NULL) {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;

    // Now replace the data of LL from stack data structure
    while(temp != NULL) {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }

    return head;
}

Node* reverseLinkedList(Node* head) {
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
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = convertArrayToLL(arr);
    // reverseLL(head);
    reverseLinkedList(head);
    print(head);

    return 0;
}