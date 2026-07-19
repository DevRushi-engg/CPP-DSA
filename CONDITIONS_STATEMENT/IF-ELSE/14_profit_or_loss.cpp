/*A shopkeeper purchased an item at a certain cost price and later sold it.

Write a C++ program that accepts the Cost Price (CP) and Selling Price (SP) as input.

If SP is greater than CP, display "Profit."
Otherwise, display "Loss."
If both are equal, display "No Profit No Loss."*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    int cost_price;
    cout<<"Enter the cost-price of the item: ";
    cin>>cost_price;

    int selling_price;
    cout<<"Enter the selling-price of the item: ";
    cin>>selling_price;


    if(cost_price < selling_price){
        cout<<"You made a Profit of rupees: "<<selling_price - cost_price<<endl;
    }
    if(cost_price > selling_price){
        cout<<"You made a Loss of rupees: "<<cost_price - selling_price<<endl;
    }
    else{
        cout<<"You made neither profit or loss."<<endl;
    }
}