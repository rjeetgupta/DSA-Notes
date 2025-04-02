#include <iostream>
#include <vector>

using namespace std;

struct Node {
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node *convert2LL(vector<int> arr) {
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

void print(Node *head) {
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *insertTailOfLL(Node *head, int val) {
    if (head == NULL) return new Node(val);

    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    Node *newNode = new Node(val);
    temp->next = newNode;
    newNode->next = nullptr;

    return head;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    Node *head = convert2LL(arr);
    head = insertTailOfLL(head, 6);
    print(head);

    return 0;
}