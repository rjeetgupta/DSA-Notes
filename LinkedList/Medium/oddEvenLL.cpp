#include <iostream>
#include <vector>
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


Node* printOddEvenLL(Node* head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }
    vector<int> arr;
    Node *temp = head;
    
    // For odd places
    while(temp != NULL && temp->next != NULL) {
        arr.push_back(temp->data);
        temp = temp->next->next;
    }

    if(temp) {
        arr.push_back(temp->data);
    }

    // For even places
    temp = head->next;
    while(temp != NULL && temp->next != NULL) {
        arr.push_back(temp->data);
        temp = temp->next->next;
    }

    if(temp) {
        arr.push_back(temp->data);
    }

    int i = 0;
    temp = head;
    while(temp != NULL) {
        temp->data = arr[i];
        i++;
        temp = temp->next;
    }

    return head;
}

Node* printOddEvenLinkedList(Node* head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }

    Node *odd = head;
    Node *even = head->next;
    Node *evenHead = head->next;

    while(even != NULL && even->next != NULL) {
        odd->next = odd->next->next;
        even->next = even->next->next;

        odd = odd->next;
        even = even->next->next;

    }

    odd->next = evenHead;

    return head;
}





int main() {

    vector<int> arr = {1, 2, 3, 4, 5};

    Node *head = convertArrayToLL(arr);

    head = printOddEvenLinkedList(head);

    print(head);

    return 0;
}