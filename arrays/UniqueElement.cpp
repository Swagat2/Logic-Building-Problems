#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
    
}
int main(){
    int arr[]={1,1,3,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<unique(arr,n);
}