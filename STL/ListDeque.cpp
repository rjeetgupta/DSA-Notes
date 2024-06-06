#include <bits/stdc++.h>
using namespace std;

void explainLists(){
    list<int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}
    ls.emplace_front(); // {2, 4}
}

// Insert take much time

void explainDeque(){
    deque<int> dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1, 2}
    dq.push_front(4); // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}

    dq.pop_back(); // (3, 4, 1)
    dq.pop_front() // {4, 1}

        dq.back();
    dq.front();

    // Rest function same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

int main() {
    explainLists();
}