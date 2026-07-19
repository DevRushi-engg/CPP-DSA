// Write a C++ program that accepts an integer from the user and determines whether it is Positive or Negative. If the number is zero, display "Zero."

#include <bits\stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number to check positive or negative: ";
    cin>>num;
    
    if(num>0){
        cout<<num<<" is positive number."<<endl;
    }
    
    if(num<0){
        cout<<num<<" is negative number."<<endl;
    }

    else{
        cout<<"The number os zero."<<endl;
    }
}