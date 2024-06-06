#include <iostream>
using namespace std;
int main(){
    int x = 5;
    int y = 4;
    	int temp = x;
	x = y; 
	y = temp;
    cout << "After swapping values are : ";
    cout << x  << " " << y;
}