#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while (n!=0)
    {
        int digit =n%10;
        if (digit==1)
        {
            ans=ans+pow(2,i);
            
        }
        n=n/10;
        i++;
    }
    // for (;n!=0 ; n=n/10)
    // {
    //     int digit=n%10;
    //     if (digit==1)
    //     {
    //         ans=ans+pow(2,i);
    //     }
    //     i++;
    // }
    cout<<ans;
}

