/*A company awards bonuses only if:

The employee has worked for more than 5 years.
Their performance rating is Excellent.

Write a C++ program to determine bonus eligibility.*/

#include <bits\stdc++.h>
using namespace std;

int main() {
    int years_Worked;
    string rating;

    cout << "Enter number of years worked: ";
    cin >> years_Worked;

    if (years_Worked > 5) {
        cout << "Enter performance rating (Excellent/Good/Average): ";
        cin >> rating;

        if (rating == "Excellent") {
            cout << "You are eligible for a bonus." << endl;
        } else {
            cout << "Not eligible. Performance rating not Excellent." << endl;
        }
    } else {
        cout << "Not eligible. Must work more than 5 years." << endl;
    }

}
