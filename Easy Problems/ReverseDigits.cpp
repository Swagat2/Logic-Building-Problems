// program to reverse digits of a number

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the digit :";
    cin >> number;
    int rev = 0;

    for (; number != 0; number = number / 10)
    {
        int rem = number % 10;
        rev = rev * 10 + rem;
    }
    cout<<"The reverse digit is : "<<rev;
    
}