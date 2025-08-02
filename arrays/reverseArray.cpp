#include<iostream> 
using namespace std;

int main() {
    int arr[] = {1, 4, 6, 9, 2, 3, 7};
    int n=sizeof(arr)/4;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    //reverse
    int i=0;
    int j=n-1;
    while (i<j)
    {
        int temp= arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}