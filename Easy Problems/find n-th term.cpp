// Find n-th term of series 1, 3, 6, 10, 15, 21...
// Given a number n, find the n-th term in the series 1, 3, 6, 10, 15, 21...


#include<iostream>
using namespace std;
int main(){
    int n,sum = 0;
    cout << "Enter the term number n: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum+=i;
    }
    cout << "The " << n << "-th term is: " << sum << endl;
}