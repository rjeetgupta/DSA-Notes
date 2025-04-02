#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1, Node *next1, Node *prev1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node *converArr2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        temp->prev = prev;
        prev = temp;
    }
    return head;
}

void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *deleteHead(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *prev = head;
    head = head->next;
    head->prev = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *newTail = tail->prev;
    newTail->next = nullptr;
    tail->prev = nullptr;
    delete tail;
    return head;
}

Node *removeKthElement(Node *head, int k){
    if (head == NULL){
        return NULL;
    }
    int cnt = 0;
    Node *kNode = head;
    while (kNode != NULL){
        cnt++;
        if (cnt == k){
            break;
            kNode = kNode->next;
        }
    }
        Node *prev = kNode->prev;
        Node *front = kNode->next;
        if (prev == NULL && front == NULL){
            return NULL;
        }
        else if (prev == NULL){
            return deleteHead(head);
        }
        else if (front == NULL){
            return deleteTail(head);
        }
        prev->next = front;
        front->prev = prev;
        kNode->next = nullptr;
        kNode->prev = nullptr;
        delete kNode;
        return head;
    }


    void deleteNode(Node *temp){
        Node* prev = temp->prev;
        Node* front = temp->next;
        if(front == NULL){
            prev->next = nullptr;
            temp->prev = nullptr;
            delete temp;
            return;
        }
        prev->next = front;
        front->prev = prev;
        temp->next = temp->prev = nullptr;
        delete temp;
    }


    // Inserting a node before the head

    Node* insertBeforeHead(Node *head, int val){
        Node* newHead = new Node(val, head, nullptr);
        head->prev = newHead;
        return newHead;
    }

    Node* insertBeforeTail(Node* head, int val){
        if(head->next == NULL){
            return insertBeforeHead(head, val);
        }
        Node *tail = head;
        while(tail->next!= NULL){
            tail = tail->next;
        }
        Node* prev = tail->prev;
        Node* newNode = new Node(val, tail, prev);
        prev->next = newNode;
        tail->prev = newNode;
        return head;
    }

    Node* insertBeforeKthElement(Node* head, int k, int val){
        if(k == 1){
            return insertBeforeHead(head, val);
        }
        Node *temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            if(cnt == k) break;
            temp = temp->next;
        }
        Node *prev = temp->prev;
        Node* newNode = new Node(val, temp, prev);
        prev->next = newNode;
        temp->prev = newNode;
        return head;
    }


    void insertBeforeNode(Node *node, int val){
        Node *prev = node->prev;
        Node* newNode = new Node(val, node, prev);
        prev->next = newNode;
        node->prev = newNode;
    }
        int main(){
            vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
            Node *head = converArr2DLL(arr);
            // print(head);

            // head = deleteHead(head);
            // print(head);

            // head = deleteTail(head);
            // print(head);

            // head = removeKthElement(head, 1);
            // print(head);

            // deleteNode(head->next);
            // print(head);

            // head = insertBeforeHead(head, 10);
            // print(head);

            // head = insertBeforeTail(head, 10);
            // print(head);

            // head = insertBeforeKthElement(head, 2, 10);
            // print(head);

            insertBeforeNode(head->next, 100);
            print(head);
            return 0;
        }