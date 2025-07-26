// A number is a perfect number if it is equal to the sum of its proper divisors, that is, the sum of its positive divisors excluding the number itself.
// Find whether a given positive integer n is perfect or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number :";
    cin >> n;
    int sum = 0;
    int temp = n;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == temp)
    {
        cout << "Perfect number ";
    }
    else
    {
        cout << "Not perfect";
    }
}