#include <iostream>
using namespace std;

int setBitCount(int num1, int num2)
{
    int count = 0;
    while ((num1 && num2) != 0)
    {
        if ((num1 & 1) && (num2 & 1))
        {
            count++;
        }
        num1 >> 1;
        num2 >> 1;
        return count;
    }
}

int main()
{
    int num, nums;
    cin >> num >> nums;
    // setBitCount(num, nums);
    cout << "Number of set Bit is : " << setBitCount(num, nums);
    return 0;
}