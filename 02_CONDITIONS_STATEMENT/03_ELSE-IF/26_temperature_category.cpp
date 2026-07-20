/*Write a C++ program that accepts the current temperature in degrees Celsius and classifies it as:

Cold
Pleasant
Warm
Hot

Choose reasonable temperature ranges.*/

#include <iostream>
using namespace std;

int main() {
    double temp;

    cout << "Enter the current temperature in Celsius: ";
    cin >> temp;

    if (temp < 10) {
        cout << "It is Cold." << endl;
    } 
    else if (temp >= 10 && temp < 20) {
        cout << "It is Pleasant." << endl;
    } 
    else if (temp >= 20 && temp < 30) {
        cout << "It is Warm." << endl;
    } 
    else {
        cout << "It is Hot." << endl;
    }

}
