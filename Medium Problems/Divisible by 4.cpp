
// Given a number, the task is to check if a number is divisible by 4 or not. 
// The input number may be large and it may not be possible to store even if we use long long int.


#include <iostream>
using namespace std;
int main()
{
    // input
    long long int n = 1234567589333862;
     
    // finding given number is divisible by 4 or not
    if (n % 4 == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
   
    return 0;
}