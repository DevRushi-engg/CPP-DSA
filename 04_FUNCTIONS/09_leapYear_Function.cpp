#include <bits/stdc++.h>
using namespace std;


void leapYear(int year) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a Leap Year" << endl;
    } else {
        cout << year << " is NOT a Leap Year" << endl;
    }
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    leapYear(year);

    return 0;
}
