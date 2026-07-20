/*Write a C++ program that accepts a number between 1 and 7 and displays the corresponding day of the week.*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    int day_n;
    cout<<"Enter the number of day(1,2,3,4,5,6,7): ";
    cin>>day_n;

    if(day_n == 1){
        cout<<"Monday";
    }
    else if(day_n == 2){
        cout<<"Tuesday";
    }
    else if(day_n == 3){ 
        cout<<"Wednesday";
    }
    else if(day_n == 4){
        cout<<"Thursday";
    }
    else if(day_n == 5){
        cout<<"Friday";
    }
    else if(day_n == 6){
        cout<<"Saturday";
    }
    else if(day_n == 7){
        cout<<"Sunday";
    }
    else{
        cout<<"Invalid Input.";
    }
}