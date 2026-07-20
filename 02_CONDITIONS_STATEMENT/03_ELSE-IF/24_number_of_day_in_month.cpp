/*Write a C++ program that accepts a month number (1–12) and displays the number of days in that month.

Assume February has 28 days.*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    int month_n;
    cout<<"Enter the number of month(1,2,3,4,5,6,7...12): ";
    cin>>month_n;

    if(month_n == 1){
        cout<<"January has 31 days";
    }
    else if(month_n == 2){
        cout<<"Febuary has 28 days";
    }
    else if(month_n == 3){ 
        cout<<"March has 31 days";
    }
    else if(month_n == 4){
        cout<<"April has 30 days";
    }
    else if(month_n == 5){
        cout<<"May has 31 days";
    }
    else if(month_n == 6){
        cout<<"June has 30 days";
    }
    else if(month_n == 7){
        cout<<"July has 31 days";
    }
    else if(month_n == 8){
        cout<<"August has 31 days";
    }
    else if(month_n == 9){
        cout<<"September has 30 days";
    }
    else if(month_n == 10){
        cout<<"October has 31 days";
    }
    else if(month_n == 11){
        cout<<"November has 30 days";
    }
    else if(month_n == 12){
        cout<<"December has 31 days";
    }
    else{
        cout<<"Invalid Input.";
    }
}