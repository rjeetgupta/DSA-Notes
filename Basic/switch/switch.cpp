#include <iostream>
using namespace std;
int main(){
    int weekNum, monthcode;
    // cin >> weekNum;
    cin >> monthcode;

    // switch (num)
    // {
    // case 1: "Monday";
    //     cout << "Monday";
    //     break;
    // case 2: "Tuesday";
    //     cout << "Tuesday";
    //     break;
    // case 3: "Wednesday";
    //     cout << "Wednesday";
    //     break;
    // case 4: "Thursday";
    //     cout << "Thursday";
    //     break;
    // case 5: "Friday";
    //     cout << "Friday";
    //     break;
    // case 6: "Saturday";
    //     cout << "Saturday";
    //     break;
    // case 7: "Sunday";
    //     cout << "Sunday";
    //     break;

    // default:
    //     "Invalid Input";
    //     break;
    // }

    // switch(weekNum){
    //     case 1: 
    //         cout << "Monday";
    //         break;
    //     case 2: 
    //         cout << "Tuesday";
    //         break;
    //     case 3: 
    //         cout << "Wednesday";
    //         break;
    //     case 4: 
    //         cout << "Thursday";
    //         break;
    //     case 5: 
    //         cout << "Friday";
    //         break;
    //     case 6: 
    //         cout << "Saturday";
    //         break;
    //     case 7: 
    //         cout << "Sunday";
    //         break;
    //     default:
    //         cout << "This is default case";
    //         break;
    // }

    switch(monthcode){
        case 1:
            cout << "January";
            break;
        case 2:
            cout << "February";
            break;
        case 3:
            cout << "March";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout << "June";
            break;
        case 7:
            cout << "July";
            break;
        case 8:
            cout << "August";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
            cout << "Octuber";
            break;
        case 11:
            cout << "November";
            break;
        case 12:
            cout << "December";
            break;
        default:
            cout << "You have entered wrong month code";
            break;
    }
}