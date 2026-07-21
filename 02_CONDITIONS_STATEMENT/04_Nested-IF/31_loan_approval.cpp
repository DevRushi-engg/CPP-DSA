/*
A bank approves loans only if:

The applicant is at least 21 years old.
Monthly income is above ₹30,000.

Write a C++ program that determines whether the applicant qualifies.*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    int age;
    int monthly_income;


    cout<<"Enter the your age: ";
    cin>>age;

    if(age>=21){
        cout<<"Enter your monthly income";
        cin>>monthly_income;

        if(monthly_income > 30000){
            cout<<"Your loans is been approved by bank.";
        }
        else{
            cout<<"Your loans approval reject by bank.Your income is below 30000 rupees.";
        }
    }
    else{
        cout<<"Your loans approval reject by bank.Your age is below 21 rupees.";
    }
}