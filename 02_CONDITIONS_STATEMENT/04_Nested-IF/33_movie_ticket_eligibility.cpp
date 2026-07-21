/*A movie has an age restriction of 18 years.

Write a C++ program that determines whether the customer can purchase the ticket.*/


#include <bits\stdc++.h>
using namespace std;

int main(){
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You can purchase the ticket." << endl;
    } else {
        cout << "You are not eligible to purchase the ticket." << endl;
    }
}