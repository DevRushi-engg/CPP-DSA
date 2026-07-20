/*A triangle can be classified as:

Equilateral
Isosceles
Scalene

Write a C++ program that accepts the lengths of three sides and displays the type of triangle.*/

#include <bits\stdc++.h>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter the lengths of three sides: ";
    cin >> a >> b >> c;

    // Check for validity of triangle
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "The given sides do not form a valid triangle." << endl;
    } 
    else {
        if (a == b && b == c && a == c) {
            cout << "The triangle is Equilateral." << endl;
        } 
        else if (a == b || b == c || a == c) {
            cout << "The triangle is Isosceles." << endl;
        } 
        else {
            cout << "The triangle is Scalene." << endl;
        }
    }

}
