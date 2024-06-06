#include <iostream>
using namespace std;

int fact(int n){
    if(n <= 1)
        return n;
    int last = fact(n - 1);
    int slast = fact(n - 2);
    return (last + slast);
    cout << "finish";
}

int main(){
    int n;
    cin >> n;
    cout << "Factorial of " << n << " is : " << fact(n);

}