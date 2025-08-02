// 1 2 1 4 1 2 5
// Not an palindrome
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 1, 4, 1, 2, 1};
    int n = sizeof(arr) / 4;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    bool ispalindrome = true;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] != arr[j])
            ispalindrome = false;
        break;
    }
    cout << endl;
    if (ispalindrome)
    {
        cout << "Palindrome ";
    }
    else
    {
        cout << "Not an palindrome ";
    }
}