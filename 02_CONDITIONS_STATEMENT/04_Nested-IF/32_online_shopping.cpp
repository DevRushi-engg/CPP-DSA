/*An online shopping website offers:

A discount only if the total purchase amount exceeds a certain value.
An additional discount for premium members.

Write a C++ program to determine which discount applies.*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    double total_purchase;
    bool premium_member;

    cout<<"Enter your total purchase amount: ";
    cin>>total_purchase;

    if(total_purchase >= 5000){
        cout << "Are you a premium member? (1 for Yes, 0 for No): ";
        cin>>premium_member;

        if(premium_member){
            cout<<"You get a additional discount as your a premium member.";
        }
        else{
            cout<<"You get a regular discount.";

        }
    }
    else{
        cout<<"You got no discount.";
    }
}