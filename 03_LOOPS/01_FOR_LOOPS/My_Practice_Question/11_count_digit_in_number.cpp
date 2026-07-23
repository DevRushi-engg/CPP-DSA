// Write a program to count digit in number

#include <bits\stdc++.h>
using namespace std;

int main(){

    long long int n;
    cout<<"Enter the number to count digits: ";
    cin>>n;

    if(n == 0){
        cout<<"Total Count: "<<1;
    }
    else{ 
        int count = 0;
        while(n>0){
            n/=10;
            count++;
        }
        cout<<"Total Count: "<<count<<endl;
    }   
}