/*Write a C++ program that accepts two numbers and an operator (+, -, *, /).

Perform the corresponding arithmetic operation and display the result.*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    int a,b;
    char c;
    cout<<"------------------------------------------"<<endl;
    cout<<"            Simple Calculator             "<<endl;
    cout<<"------------------------------------------"<<endl<<endl;

    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the operation to perform (+, -, *, /): ";
    cin>>c;

    if(c == '+'){
        cout<<"The Additon of the numbers is : "<<a<<" + "<<b<<" = "<<a+b;
    }

    else if(c == '-'){
        cout<<"The Substraction of the numbers is : "<<a<<" - "<<b<<" = "<<a-b;
    }

    else if(c == '*'){
        cout<<"The Multiplication of the numbers is : "<<a<<" * "<<b<<" = "<<a*b;
    }

    else if(c == '/'){
        cout<<"The Division of the numbers is : "<<a<<" / "<<b<<" = "<<a/b;
    }

    else {
        cout<<"Invalid Input.";
    }
}
