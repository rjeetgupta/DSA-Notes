#include <bits/stdc++.h>
using namespace std;

void explainpair(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> obj = {1, {3, 4}};
    cout << obj.first << " " << obj.second.second << " " << obj.second.first;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second;
}

int main(){
    explainpair();
}