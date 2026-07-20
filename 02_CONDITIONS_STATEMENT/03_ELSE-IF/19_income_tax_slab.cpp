/*A country's tax department follows these rules:

Income below ₹2,50,000 → No Tax
₹2,50,000–₹5,00,000 → 5%
₹5,00,001–₹10,00,000 → 20%
Above ₹10,00,000 → 30%

Write a C++ program that accepts annual income and displays the applicable tax slab.*/

#include <bits\stdc++.h>
using namespace std;

int main(){

    int income;
    cout<<"Enter your annual income to view applicable tax slab: ";
    cin>>income;

    if(income < 250000){
        cout<<" No tax applicable on your income."<<endl;
    }
    else if(income >= 250000 && income <=500000){
        cout<<" 5% tax applicable on your annual income"<<endl;
        cout<<" 5% of annual income is "<<(income * 0.05);
    }
    else if(income >= 500001 && income <=1000000){
        cout<<" 20% tax applicable on your annual income"<<endl;
        cout<<" 20% of annual income is "<<(income * 0.2);
    }
    else {
        cout<<" 30% tax applicable on your annual income"<<endl;
        cout<<" 30% of annual income is "<<(income * 0.3);
    }
}