#include <bits/stdc++.h>
using namespace std;

void explainvector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    // vec.emplace_back({1, 2});

    vector<int> v(5, 100);

    vector<int> v(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);



    // Accessing vector
    /*
        There are two ways to access : -
        1. Like array
        2. By Iterator
    */

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";


    // Iterator
    // {20, 10, 15, 6, 7}
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it); // => 10

    it = it + 2;
    cout << *(it) << " "; // => 6

    vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin();

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }


    for(auto it : v){
        cout << it << " ";
    }

    // Delete

    // {10, 20, 23, 48}
    v.erase(v.begin() + 1); // => 20

    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 40); // {20, 12, 23}  (start, end)



    // Insert

    vector<int> v(2, 100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); // {100, 10, 10, 100}

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end());  // {50, 50, 100, 10, 10, 100}


    // {10, 20}
    cout << v.size(); // 2

    // {10, 20}
    v.pop_back(); // {10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30, 40}, v2 -> {10, 20}

    v.clear(); // erase entire vector

    cout << v.empty(); // Answer in true or false
}

int main(){
    explainvector();
}