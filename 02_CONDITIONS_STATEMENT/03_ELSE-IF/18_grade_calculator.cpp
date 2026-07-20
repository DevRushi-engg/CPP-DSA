/*A school follows the grading system below:

90–100 : Grade A
80–89 : Grade B
70–79 : Grade C
60–69 : Grade D
Below 60 : Grade F

Write a C++ program that accepts a student's marks and displays the appropriate grade.*/ 

#include <bits\stdc++.h>
using namespace std;

int main(){

    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;

    if(marks<=100 && marks>=90){
        cout<<"Garde A";
    }
    
    else if(marks<=89 && marks>=80){
        cout<<"Garde B";
    }

    else if(marks<=79 && marks>=70){
        cout<<"Garde C";
    }

    else if(marks<=69 && marks>=60){
        cout<<"Garde D";
    }
    else {
        cout<<"Grade F";
    }
}