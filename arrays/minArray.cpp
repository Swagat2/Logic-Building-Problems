#include<iostream>
using namespace std;
int main(){
    int arr[]={12,32,2,6,87,22,11};
    int n=sizeof(arr)/4;
    int mn=arr[0];
    for (int i = 1; i < n; i++)
    {
       mn=min(mn,arr[i]);
    }
    cout<<mn;
}