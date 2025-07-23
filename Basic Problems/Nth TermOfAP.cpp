// Nth term of AP from First Two Terms

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number number of series you want : ";
    cin>>n;
    int a;
    cout<<"Enter the first term(a) : ";
    cin>>a;
    int d;
    cout<<"Enter the common difference :";
    cin>>d;
    for (int i = 0; i < n; i++)
    {
        cout<<a+i*d<<" ";
    }
}