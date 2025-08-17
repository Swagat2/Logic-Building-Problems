#include<iostream>
using namespace std;

void swapalter(int arr[],int n){
    //  int i=0;       ALternate form using while loop
    // int j=i+1;
    // while (j<n)
    // {
    //     int temp=arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp;
    //     i=i+2;
    //     j=i+1;
    // }
    for (int i = 0; i < n; i+=2)
    {
        if (i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
}

void printNum(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    swapalter(arr,n);
    printNum(arr, n);
}