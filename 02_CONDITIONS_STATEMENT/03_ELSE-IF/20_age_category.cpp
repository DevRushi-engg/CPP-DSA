/*Write a C++ program that accepts a person's age and classifies them as:

Child
Teenager
Adult
Senior Citizen

Choose appropriate age ranges.*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if (age < 0) {
        cout << "Invalid age entered." << endl;
    } 
    else if (age <= 12) {
        cout << "You are classified as a Child." << endl;
    } 
    else if (age <= 19) {
        cout << "You are classified as a Teenager." << endl;
    } 
    else if (age <= 59) {
        cout << "You are classified as an Adult." << endl;
    } 
    else {
        cout << "You are classified as a Senior Citizen." << endl;
    }
}