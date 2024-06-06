#include <bits/stdc++.h>
using namespace std;

/* 
    In stack there are only three operation
    1. Push -> insert 
    2. Pop -> delete top 
    3. top -> tells top element only

    stack is a LIFO technique i.e Last in First Out

    time complexity O(1)
*/

void explainStack(){
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(4); // {4, 3, 2, 1}
    st.emplace(5); // {5, 4, 3, 2, 1}

    cout << st.top(); // print 5 "** st(2) is invalid **"
    st.pop(); // st looks like {4, 3, 2, 1}

    cout << st.top();//

    cout << st.size(); //

    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}

/*
    Queue is a FIFO technique i.e First In First Out

    All ther operation happens like stack
    time complexity is O(1) i.e const time
*/
void explainQueue(){
    queue<int> q;
    q.push(1);  // {1}  
    q.push(2);  // {1, 2}
    q.push(3);  // {1, 2, 3}
    q.emplace(4);  // {1, 2, 3, 4}

    q.back() += 5;

    cout << q.back(); // print 9

    // Q is {, 2, 9}
    cout << q.front(); // print 1

    q.pop(); // {2, 9}

    cout << q.front(); // print 2

    // size, swap, empty, same as stack
}


void explainPQ(){
    priority_queue<int> pq1;

    pq1.push(5); // {5}
    pq1.push(2); // {5, 2}
    pq1.push(8); // {8, 5, 2}
    pq1.emplace(10); // {10, 8, 5, 2}

    cout << pq1.top(); // print 10

    pq1.pop(); // {8, 5, 2}

    cout << pq1.top(); // print 8

    // size, swap, empty function same as other

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // print 2
}

/*
    push and pop have time complexity log(n)
    top has time complexity O(1)
*/

int main(){
    explainStack();

}