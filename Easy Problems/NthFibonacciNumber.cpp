//Nth Fibonacci Number
// Given a positive integer n, the task is to find the nth Fibonacci number.
// The Fibonacci sequence is a sequence where the next term is the sum of the previous two terms. 
// The first two terms of the Fibonacci sequence are 0 followed by 1. The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number of terms you want :";
    cin>>number;
    int first_number=0;
    int second_number=1;
    for (int i = 0; i < number; i++)
    {
        cout<<first_number<<" ";
        int next_number=first_number+second_number;
        first_number=second_number;
        second_number=next_number;
    }
    
}
