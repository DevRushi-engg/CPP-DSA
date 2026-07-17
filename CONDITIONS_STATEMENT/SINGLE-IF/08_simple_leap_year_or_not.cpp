// For this problem, assume a leap year is any year that is divisible by 4.

// Write a C++ program that accepts a year as input. If the year satisfies this condition, display "Leap Year." Otherwise, do not print anything.

#include <bits\stdc++.h>
using namespace std;

int main(){
    int year;
    cout<<"Enter the year to check for leap year: ";
    cin>>year;

    if(year%4==0){
        cout<<year<<" is leap year.";
    }
}