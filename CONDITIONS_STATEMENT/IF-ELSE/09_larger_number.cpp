// Write a C++ program that accepts two integers from the user. Compare them and display the larger number. If both numbers are equal, display "Both numbers are equal."

#include <bits\stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"-------------------------------------------";
    cout<<"            Large Number Finder            ";
    cout<<"-------------------------------------------";

    cout<<"Enter the first number: ";
    cin>>a;

    int b;
    cout<<"Enter the second number: ";
    cin>>b;

    if(a>b){
        cout<<a<<"is greater than "<<b<<endl;
    }
    if(b>a){
        cout<<b<<" is greater than"<<b<<endl;
    }
    else{
        cout<<a<<" is equal to "<<b<<endl;
    }


}