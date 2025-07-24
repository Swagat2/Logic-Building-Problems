// Given a positive integer, check if the number is prime or not.
// A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself.
// Examples of the first few prime numbers are {2, 3, 5, ...}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin >> n;

        for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not prime number";
            break;   //This is the formula using break statement
        }

        else{
            cout<<"Prime number";
            break;
        }
    }
}