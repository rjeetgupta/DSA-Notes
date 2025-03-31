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

int lengthOfLL(Node* head) {
    Node *temp = head;
    int cnt = 0;
    while(temp) {
        temp = temp->next;
        cnt = cnt + 1;
    }
    return cnt;
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5, 6};

    Node *head = convertArrayToLL(arr);

    cout << lengthOfLL(head);

    return 0;
}