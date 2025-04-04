#include<bits/stdc++.h>
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

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfLL(Node* head){
    int cnt = 0;
    Node *temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

void print(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* removeHead(Node* head){
    if(head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    delete (temp);
    return head;
}


int checkIfPresent(Node* head, int val){
    Node *temp = head;
    while(temp){
        if(temp->data == val)
            return 1;
        temp = temp->next;
    }
    return 0;
}


Node* removeTail(Node* head){
    if(head == NULL || head->next == NULL)
        return NULL;
    Node *temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp -> next;
    temp -> next = nullptr;
    return head;
}

Node* removeK(Node* head, int k){
    if(head == NULL)
        return head;
    if(k==1){
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    Node *prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}


Node* insertPosition(Node* head, int el, int K){
    if(head == NULL){
        if(K==1){
            return new Node(el);
        }
        else{
            return head;
        }
    }
    if(K==1){
        return new Node(el, head);
    }
    int cnt = 0;
    Node *temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == (K-1)){
            Node *x = new Node(el, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}


Node* insertBeforeValue(Node* head, int el, int val){
    if(head == NULL){
        return NULL;
    }
    
    if(head->data == val){
        return new Node(el, head);
    }

    Node *temp = head;
    while(temp->next != NULL){
        if(temp->next->data == val){
            Node *x = new Node(el, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> arr = {2, 4, 6, 8};
    Node* head = convertArr2LL(arr);
    // cout << head-> data;
     // traversing
    // Node* temp = head;
    // while(temp){
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    // cout << lengthOfLL(head);

    // cout << checkIfPresent(head, 5);

    // head = removeHead(head);
    // print(head);


    // head = removeTail(head);
    // print(head);


    // head = removeK(head, 3);
    // print(head);


    // head = insertPosition(head, 3, 10);
    // print(head);


    // head = insertBeforeValue(head, 3, 6);
    // print(head);
}
