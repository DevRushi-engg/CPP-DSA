// A teacher wants to identify numbers that are perfectly divisible by 5.

// Write a C++ program that accepts an integer from the user. If the number is divisible by 5, display "Divisible by 5." Otherwise, do not print anything.

#include <bits\stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter any number to check divisibilty of 5: ";
    cin>>num;

    if(num%5==0){
        cout<<num<<" is divisible by 5";
    }
}