#include<iostream> 
using namespace std;

int main() {
    int a[] = {1, 4, 6, 9, 2, 3, 7};
    int n=sizeof(a)/4;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        int j=n-1-i;
        b[i]=a[j];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<" ";
    }
    
    

}