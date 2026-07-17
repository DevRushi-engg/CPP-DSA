// The Election Commission has announced that only citizens who are 18 years of age or older are eligible to vote.

// Write a C++ program that accepts a person's age as input. If the person is eligible, display "Eligible to Vote." Otherwise, do not print anything.

#include <bits\stdc++.h>
using namespace std;

int main(){

    int age;
    cout<<"Enter your ege to check eligibiltiy to vote: ";
    cin>>age;

    if(age >= 18){
        cout<<"Your eligible to vote.";
    }
}