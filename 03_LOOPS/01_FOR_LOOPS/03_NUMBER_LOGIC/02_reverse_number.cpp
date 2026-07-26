// Reverse a number.

#include <bits\stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int lastdigit;
    int store = 0;
    if(n ==0){
        cout<<"Reversed of 0 is 0";
    }
    else{
        cout<<"Reversed of numer is : ";
        while(n>0){
            lastdigit = n % 10;
            store = lastdigit;
            n /= 10;
            cout<<store;
        }
    }
}