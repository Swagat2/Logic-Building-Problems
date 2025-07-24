// Sum of Digits of a Number

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the digits : ";
    cin>>n;
    
    int sum =0;
    for (;n != 0;n=n/10)
    {
        int last=n%10;
        sum=sum+last;
    }
    cout<<"Sum of digits : "<<sum<<endl;
    
}