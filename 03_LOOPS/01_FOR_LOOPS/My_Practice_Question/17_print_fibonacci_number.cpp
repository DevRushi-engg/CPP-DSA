// Write a program to print the fibonacci number (fibonacci is sum of previous to number 1 + 1 = 2, 1 + 2 = 3, 2 + 3 = 5 .........)

#include <bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the nth terms: ";
    cin>>n;

    int a = 0;
    int b = 1;
    int sum = 0;

    for(int i = 0; i <= n; i++){
        sum = a+b;
        a = b;
        b = sum;
    }
    cout<<"Sum is "<<sum;
}