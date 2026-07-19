// Write a C++ program that accepts two integers. Determine whether the first number is exactly divisible by the second number and display an appropriate message.

#include <bits\stdc++.h>
using namespace std;

int main(){
    
    int num1;
    cout<<"Enter number: ";
    cin>>num1;

    int num2;
    cout<<"Enter another number: ";
    cin>>num2;

    if(num1 % num2 == 0){
        cout<<num1<<" is completely divisible by "<<num2<<endl;
    }
    else{
        cout<<num1<<" is not completely divisible by "<<num2<<endl;
    }
}
