//Given two positive numbers x and y, check if y is a power of x or not

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter number a: ";
    cin>>a;
    cout << "Enter base b: ";
    cin>>b;
     bool isPower = false;
    if (b%a==0)
    {
        isPower = True;
        break; 
    }
    else{
        cout<<"false";
    }
    
}