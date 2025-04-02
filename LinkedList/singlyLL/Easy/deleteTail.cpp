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


Node* convert2LL(vector<int> arr) {
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
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


Node* deleteTailOfLL(Node* head) {
    if(head == NULL || head->next == NULL) {
        return NULL;
    }

    Node *temp = head;

    while(temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;

    return head;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = convert2LL(arr);
    head = deleteTailOfLL(head);
    print(head);

    return 0;
}