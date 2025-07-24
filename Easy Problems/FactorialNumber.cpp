//Given the number n (n >=0), find its factorial. Factorial of n is defined as 1 x 2 x ... x n. For n = 0, factorial is 1.
//  We are going to discuss iterative and recursive programs in this post.
//Factorial of a Number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
    }
    cout<<"Factorial of "<<n<<" is :"<<fact;
    
}