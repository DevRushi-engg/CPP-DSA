// A student passes an examination only if they score 35 or more marks.

// Write a C++ program that accepts the student's marks and displays either "Pass" or "Fail."

#include <bits\stdc++.h>
using namespace std;

int main(){

    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    if(marks >= 35){
        cout<<"Your are pass!"<<endl;
    }
    else{
        cout<<"Your are fail!"<<endl;
    }
}