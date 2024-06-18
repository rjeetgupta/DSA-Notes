/*
    1. Linear DS and LIFO implementations
    2. Before pushing the element into the stack, check the stack , it is already full or not (top == capacity - 1)
    3. If full then increase the stack size by one top = top + 1
    4. Before poping the element check if it is empty or not
    5. top == -1 then it returns underflow
    6. top = top - 1 for decrease the stack size by one
    7. for empty check => isEmpty() , top == -1
    8. for full check => isFull() , top == capacity - 1

*/

/* C++ program to implement basic stack
   operations */
#include <bits/stdc++.h>
#include<iostream>

using namespace std;

#define MAX 1000

class Stack {
    int top;

public:
    int a[MAX]; // Maximum size of Stack

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

bool Stack::push(int x)
{
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}


int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout << s.pop() << " Popped from stack\n";

    //print top element of stack after popping
    cout << "Top element is : " << s.peek() << endl;

    //print all elements in stack :
    cout <<"Elements present in stack : ";
    while(!s.isEmpty())
    {
        // print top element in stack
        cout << s.peek() <<" ";
        // remove top element in stack
        s.pop();
    }

    return 0;
}
//Code is Modified By Vinay Pandey
