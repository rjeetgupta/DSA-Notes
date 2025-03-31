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

void traversing(Node* head) {
    Node *temp = head;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5, 6};

    Node *head = convertArrayToLL(arr);
    traversing(head);

    return 0;
}