//Given an array of integers, change the value of all odd index elements to its second multiple
//and increment all even indexed value by 10.
// output: 
//1 2 3 4 5
// 11 4 13 8 15

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elememts : ";
    for (int i = 0 ; i < n; i++)
    {
        cin>>arr[i];
    }

    cout << "Squares of natural numbers till " << n << " are:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //change the element
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            arr[i]+=10;
        }
        else{
            arr[i]*=2;
        }
        
    }
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}