#include<iostream> 
using namespace std;
int main(){
    int arr[]={1,4,6,9,2,3,8};
    int x=5;
    int count=0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]>x)
        {
            count++;
        }
        
    }
    cout<<count<<" ";
    
    
}