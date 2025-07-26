//Program for Armstrong Numbers

#include<iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    cout << "Enter a digits : ";
    cin >> n;
    int digit = 0;
    int sum = 0;
    int temp = n;
    for (int i = n; i != 0; i /= 10)
    {
        digit++;
    }
    for (int i = n; i != 0; i /= 10)
    {
        int rem = i % 10;
        sum = sum + pow(rem, digit);
    }
    if (sum == temp)
    {
        cout << "Amstrong number";
    }
    else
    {
        cout << "Not an Amstrong Number";
    }
}