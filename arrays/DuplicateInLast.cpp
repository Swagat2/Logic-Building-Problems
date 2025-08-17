#include<iostream>
using namespace std;
int dupli(int arr[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        ans=ans^i;
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<dupli(arr,n);
}