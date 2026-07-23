//Write a program to print the factorial of the n number

#include <bits\stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number for factorial: ";
    cin>>n;

    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    cout<<"Factorial of "<<n<<"! = "<<factorial<<endl;
}