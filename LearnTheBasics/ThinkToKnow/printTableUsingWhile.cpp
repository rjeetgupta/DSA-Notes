// N's table in reverse order using while loop

#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number to print the table : ";
    cin >> n;

    int table = 10;

    while(table >= 1) {
        cout << n * table << endl;
        table--;
    }

    return 0;
}