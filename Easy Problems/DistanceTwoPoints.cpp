//Program to calculate distance between two points
//You are given two coordinates (x1, y1) and (x2, y2) of a two-dimensional graph. Find the distance between them.

#include <iostream>
#include <cmath>  // only for sqrt
using namespace std;

int main() {
    float x1, y1, x2, y2;

    cout << "Enter coordinates of first point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter coordinates of second point (x2 y2): ";
    cin >> x2 >> y2;

    float dx = x2 - x1;
    float dy = y2 - y1;

    float distance = sqrt((dx * dx) + (dy * dy));

    cout << "Distance between the two points is: " << distance << endl;

    return 0;
}
