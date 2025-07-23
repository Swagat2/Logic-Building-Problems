
//Program for Sum of squares of first n natural numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum=sum+i*i;
    }
    cout<<"Sum of squares of first n natural numbers = "<<sum;
}