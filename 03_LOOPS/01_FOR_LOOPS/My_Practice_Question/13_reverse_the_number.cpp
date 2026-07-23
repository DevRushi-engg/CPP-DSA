// Print the number in reverse order

#include <bits\stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int store;
    int lastdigit;
    cout<<"Reverse of number is: ";
    while(n>0){ 
        lastdigit = n % 10;
        store = lastdigit;
        n /= 10;
        cout<<store;
    }
}