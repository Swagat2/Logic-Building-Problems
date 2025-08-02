#include<iostream>
using namespace std;
int main(){
    int i,j;
    int temp=0;
    int arr[5]={11,9,71,22,32};
    // cout<<arr[5];
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
    }
    for(i = 0; i < 5; i++) {
        cout << arr[i] <<" ";
    }
    cout<<endl;

}