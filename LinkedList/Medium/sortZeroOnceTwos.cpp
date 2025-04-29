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

Node* sortLL(Node* head) {

    if(head == NULL || head->next == NULL) {
        return head;
    }

    Node *temp = head;
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    while(temp != NULL) {
        if(temp->data == 0)
            cnt0++;
        else if(temp->data == 1)
            cnt1++;
        else
            cnt2++;
        temp = temp->next;
    }

    temp = head;
    while(temp != NULL) {
        if(cnt0) {
            temp->data = 0;
            cnt0--;
        }
        else if(cnt1) {
            temp->data = 1;
            cnt1--;
        }
        else {
            temp->data = 2;
            cnt2--;
        }
        temp = temp->next;
    }

    return head;
}

Node *sortLLOptimized(Node *head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }

    // Initialize with dummy node
    Node *zeroHead = new Node(-1);
    Node *oneHead = new Node(-1);
    Node *twoHead = new Node(-1);

    // For moving each head individual
    Node *zero = zeroHead;
    Node *one = oneHead;
    Node *two = twoHead;

    Node *temp = head;

    while(temp != NULL) {
        if(temp->data == 0) {
            zero->next = temp;
            zero = temp;
        }
        else if(temp->data == 1) {
            one->next = temp;
            one = temp;
        }
        else {
            two->next = temp;
            two = temp;
        }

        temp = temp->next;
    }

    zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
    one->next = twoHead->next;
    two->next = NULL;
    
    // Initialize new head to be returned
    Node *newHead = zeroHead->next;
    
    // Now free all the spaces
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return newHead;
}

    int main()
{

    vector<int> arr = {0, 1, 1, 2, 0, 2, 1};
    Node *head = convertArrayToLL(arr);
    sortLLOptimized(head);
    print(head);

    return 0;
}