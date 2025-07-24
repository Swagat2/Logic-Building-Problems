//Check whether triangle is valid or not if sides are given
//Given three sides, check whether triangle is valid or not. 
//A triangle is valid if sum of its two sides is greater than the third side. If three sides are a, b and c, then three conditions should be met. 
// (a + b) > c
// (a + c) > b
// (b + c) > a  

#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;

    if (((a + b) > c)&&((a + c) > b)&&((b + c) > a))
    {
        cout<<"Valid Triangle ";
    }
    else{
        cout<<"Invalid Triangle ";
    }
}