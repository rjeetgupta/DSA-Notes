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

Node* addTwoNumbersLL(Node* head1, Node* head2) {
    Node *dummyHead = new Node(-1);
    Node *curr = dummyHead;

    Node *temp1 = head1;
    Node *temp2 = head2;
    int carry = 0;

    while(temp1 != NULL || temp2 != NULL) {
        int sum = carry;
        if(temp1)
            sum += temp1->data;
        if(temp2)
            sum += temp2->data;
        Node *newNode = new Node(sum % 10);
        carry = sum / 10;

        curr->next = newNode;
        curr = curr->next;

        if(temp1)
            temp1 = temp1->next;
        if(temp2)
            temp2 = temp2->next;
    }

    if(carry) {
        Node *newNode = new Node(carry);
        curr->next = newNode;
    }

    return dummyHead->next;
}





int main() {

    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {4, 5, 6};
    Node *head1 = convertArrayToLL(arr1);
    Node *head2 = convertArrayToLL(arr2);
    Node* head = addTwoNumbersLL(head1, head2);
    print(head);

    return 0;
}