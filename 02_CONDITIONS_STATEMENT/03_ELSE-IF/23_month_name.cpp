/*Write a C++ program that accepts a number between 1 and 12 and displays the corresponding month name.*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    int month_n;
    cout<<"Enter the number of month(1,2,3,4,5,6,7...12): ";
    cin>>month_n;

    if(month_n == 1){
        cout<<"January";
    }
    else if(month_n == 2){
        cout<<"Febuary";
    }
    else if(month_n == 3){ 
        cout<<"March";
    }
    else if(month_n == 4){
        cout<<"April";
    }
    else if(month_n == 5){
        cout<<"May";
    }
    else if(month_n == 6){
        cout<<"June";
    }
    else if(month_n == 7){
        cout<<"July";
    }
    else if(month_n == 8){
        cout<<"August";
    }
    else if(month_n == 9){
        cout<<"September";
    }
    else if(month_n == 10){
        cout<<"October";
    }
    else if(month_n == 11){
        cout<<"November";
    }
    else if(month_n == 12){
        cout<<"December";
    }
    else{
        cout<<"Invalid Input.";
    }
}
