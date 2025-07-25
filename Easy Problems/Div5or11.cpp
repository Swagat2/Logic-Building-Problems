#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a character: ";
    cin >> number;

    if (number%5==0 && number%11==0)
    {
        cout << "Divisible by both 5 and 11";
    }
    else
    {
        cout << "Not divisible by both 5 and 11";
    }

    return 0;
}
