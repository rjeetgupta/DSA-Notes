// There is a user and a list containing single values R or two values depending on the choice if user's choice is 1 then calcualte area of circle having radius R and if user's choice is 2 then calculate the are of rectangle with the given Length(L) and Breadth(B).


#include <bits/stdc++.h>
using namespace std;

int main() {

    int choice;
    vector<int> v = {2, 3};

    cout << "Enter your choice 1 or 2 : ";
    cin >> choice;

    int area;

    switch (choice)
    {
    case 1:
        area = M_PI * v[0] * v[0];
        cout << "Area of circle is : " << area;
        break;
    
    case 2:
        area = v[0] * v[1];
        cout << "Area of rectangle is : " << area;
        break;
    
    default:
        cout << "Invalid choice";
        break;
    }

    return 0;
}