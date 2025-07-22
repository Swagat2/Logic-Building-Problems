#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the multiplication table you want :";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        cout<<n<<" * "<<i<<" ="<<n*i<<endl;
    }
    
}