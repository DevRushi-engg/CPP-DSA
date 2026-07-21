/*A student receives a scholarship only if:

Marks are at least 85.
Attendance is at least 75%.

Write a C++ program that determines whether the student qualifies.*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    int min_marks= 85;
    int min_attend = 75;

    int chck_attend;
    int chck_marks;

    cout<<"Enter your attendance: ";
    cin>>chck_attend;

    if(chck_attend>=min_attend){
        cout<<"Enter your marks: ";
        cin>>chck_marks;

        if(chck_marks>=min_marks){
            cout<<"Your are eligible to recieve your scholarships."<<endl;
        }
        else{
            cout<<"Your are not eligible to recieve your scholarships. You don't fullfill marks requirement."<<endl;
        }

    }
    else{
        cout<<"Your are not eligible to recieve your scholarships. You don't fullfill attendance requirement."<<endl;
    }
}