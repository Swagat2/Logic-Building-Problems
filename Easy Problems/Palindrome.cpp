//Check if a number is Palindrome
// Given an integer n, find whether the number is Palindrome or not. A number is a Palindrome if it remains the same when its digits are reversed.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a digit : ";
    cin>>n;
    int original=n;
    int rev=0;
    for (;n !=0; n/=10)
    {
        int rem=n%10;
        rev=rev*10+rem;
    }
    if (rev==original)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
    
}