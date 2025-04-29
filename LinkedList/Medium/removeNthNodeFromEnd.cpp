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

Node* removeNthFromEnd(Node* head, int N) {
    if(head == NULL || head->next == NULL) {
        return head;
    }

    int cnt = 0;
    Node *temp = head;

    // counting the number of node in the LL
    while(temp != NULL) {
        cnt++;
        temp = temp->next;
    }

    // If head to be deleted

    if(cnt == N) {
        Node *newNode = head->next;
        delete head;
        return newNode;
    }

    int res = cnt - N;
    temp = head;

    while(temp != NULL) {
        res--;



        if(res == 0)
            break;
        temp = temp->next;
    }

    Node* delNode =  temp->next;
    temp->next = temp->next->next;
    free(delNode);

    return head;
}

Node* removeNthFromLast(Node* head, int N) {
    Node *fast = head;
    Node *slow = head;

    for (int i = 0; i < N; i++)
        fast = fast->next;
    if(fast == NULL)
        return head->next;
    while(fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    Node *delNode = slow->next;
    slow->next = slow->next->next;
    delete delNode;

    return head;
}


int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    Node *head = convertArrayToLL(arr);
    removeNthFromLast(head, 5);
    print(head);

    return 0;
}