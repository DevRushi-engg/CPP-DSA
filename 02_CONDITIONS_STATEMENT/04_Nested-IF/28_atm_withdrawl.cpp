/*An ATM allows withdrawal only if:

The entered PIN is correct.
The account has sufficient balance.

Write a C++ program to simulate this process.*/


#include <bits\stdc++.h>
using namespace std;

int main(){
    cout<<"---------------------"<<endl;
    cout<<"        ATM          "<<endl;
    cout<<"---------------------"<<endl<<endl;

    int pin = 4539;
    double balance = 45000;

    double withdrawal;

    int chck_pin;
    cout<<"Enter your pin: ";
    cin>>chck_pin;
    if(chck_pin == pin){
        cout<<"Enter the amount to withdraw: ";
        cin>>withdrawal;
        if(withdrawal > balance ){
            cout<<"You don't have sufficient balance to withdraw money." << endl;
        }
        else{
            cout<<"Withdrawal successful!!"<<endl;
            cout<<"Rupees "<<withdrawal<<" debited from the account"<< endl;
            cout<<"Remaining balance: Rupees "<<balance - withdrawal<< endl;
        }
    }
    else{
        cout<<"Incorrect Pin. Try again";
    }

}