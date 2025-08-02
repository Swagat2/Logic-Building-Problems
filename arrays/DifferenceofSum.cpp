#include<iostream> 
using namespace std;

int main() {
    int arr[] = {1, 4, 6, 9, 2, 3, 8};
    int sumodd = 0;
    int sumeven = 0;
    

    for (int i = 0; i <= 6; i++) {
        if (i % 2 == 0) {
            sumeven += arr[i];
        } else {
            sumodd += arr[i];
        }
    }

    cout << "Sum of even numbers: " << sumeven << endl;
    cout << "Sum of odd numbers: " << sumodd << endl;
    cout<<" The difference between even and odd :"<<sumeven-sumodd;

    return 0;
}
