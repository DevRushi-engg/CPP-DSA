//Write a C++ program that accepts three different integers from the user and displays the largest among them.

#include <bits\stdc++.h>
using namespace std;

int main(){
    int num1,num2,num3;

    cout<<"-------------------------------------------"<<endl;
    cout<<"            Large Number Of Three          "<<endl;
    cout<<"-------------------------------------------"<<endl<<endl;

    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the third number: ";
    cin>>num3;

    if((num1>num2) && (num1>num3)){
        cout<<num1<<" is larger than "<<num2<<" and "<<num3<<endl;
    }

    else if((num2>num3) && (num2>num1)){
        cout<<num2<<" is larger than "<<num1<<" and "<<num3<<endl;
    }

    else if((num3>num2) && (num3>num1)){
        cout<<num3<<" is larger than "<<num1<<" and "<<num2<<endl;
    }
    else{
        cout<<"Invalid Input."<<endl;
    }
}