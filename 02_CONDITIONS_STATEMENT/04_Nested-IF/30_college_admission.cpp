/*A student is eligible for admission only if:

They passed the entrance exam.
Their percentage is at least 60%.

Write a C++ program to determine admission eligibility.*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    bool passed;
    double percentage;

    cout<<"Did you pass the entrance exam? (1 for Yes, 0 for No): ";
    cin>>passed;

    if(passed){
        cout<<"Enter your marks: ";
        cin>>percentage;

        if(percentage>=60){
            cout<<"You are eligible for admission.";
        }
        else{
            cout<<"You are not eligible for admission.Percentage is below 60";
        }
    }
    else{
        cout<<"You are not eligible for admission.You did not pass the entrance exam.";
    }
}


