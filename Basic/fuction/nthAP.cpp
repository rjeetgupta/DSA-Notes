#include <iostream>
using namespace std;

int nthProgression(int n){
    int Cal = (3 * n + 7);
    return Cal;
}


int main(){
    int num;
    cin >> num;
    cout << "nth Arithmetic Progression is : " << nthProgression(num);
}