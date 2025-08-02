// n=5
// Squares of natural numbers till 5 are: 1 4 9 16 25

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for (int i = 0 ; i < n; i++)
    {
        arr[i]=(i+1)*(i+1);
    }

    cout << "Squares of natural numbers till " << n << " are:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}