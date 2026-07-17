// Write a C++ program that accepts an integer from the user. If the entered number is greater than zero, display "The number is Positive." If the number is not positive, do not print anything.

#include <bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number to check is it positive: ";
    cin>>n;

    if(n > 0){
       cout<<n<<"The number is Positive";
    }

}

