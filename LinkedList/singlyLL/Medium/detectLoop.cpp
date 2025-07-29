#include <iostream>
#include <unordered_map>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

bool detectLoop(Node* head) {
    Node *temp = head;
    unordered_map<Node *, int> mpp;
    while(temp != NULL) {
        if(mpp.find(temp) != mpp.end()) {
            return true;
        }
        // store the current node in the map
        mpp[temp] = 1;
        temp = temp->next;
    }
    // if map is successfully traversed then no loop
    return false;
}

// Optimized solution
// Using Tortoise and Hare algorithm
bool checkLoop(Node* head) {
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            return true;
        }
    }
    return false;
}

int main() {

// Create a sample linked list
    // with a loop for testing
    
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
     // Create a loop
    fifth->next = third; 

    // Check if there is a loop 
    // n the linked list
    if (detectLoop(head)) {
        cout << "Loop detected in the linked list." << endl;
    } else {
        cout << "No loop detected in the linked list." << endl;
    }

    // Clean up memory (free the allocated nodes)
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;


    return 0;
}