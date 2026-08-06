// Given an array of marks of students if the marks of any student is less than 35 print its roll number.[roll number here refer to index of the array]

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of student : ";
    cin>>n;

    int marks[n];

    cout<<"Enter students marks : ";
    for(int i = 0; i <= n-1; i++){
        cin>> marks[i];
    }

    cout<<"Roll No. of the student with marks below 35 are : ";
    for(int j = 0 ; j <= n-1; j++){
        if(marks[j] < 35){
            cout<<j<<" ";
        }
    }
}