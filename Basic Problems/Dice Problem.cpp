//You are given a cubic dice with 6 faces. All the individual faces have a number printed on them. 
//The numbers are in the range of 1 to 6, like any ordinary dice. You will be provided with a face of this cube,
// your task is to guess the number on the opposite face of the cube.

#include<iostream>
using namespace std;
int opposite(int n)
{
    int ans;
    if (n == 1)
    {
        ans = 6;
    }
    else if (n == 2)
    {
        ans = 5;
    }
    else if (n == 3)
    {
        ans = 4;
    }
    else if (n == 4)
    {
        ans = 3;
    }
    else if (n == 5)
    {
        ans = 2;
    }
    else if (n == 6)
    {
        ans = 1;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter a dice number :";
    cin >> n;
    cout << opposite(n);
    return 0;
}