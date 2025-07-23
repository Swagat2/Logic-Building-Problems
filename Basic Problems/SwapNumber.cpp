// Given two numbers a and b, the task is to swap them

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two number "<<endl;
    cin>>a;
    cin>>b;

    int temp =a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
}