// Write a program to print the sum of digits in the number

#include <bits\stdc++.h>
using namespace std;

int main(){

    long int n;
    cout<<"Enter the number: ";
    cin>>n;

    int lastdigit;
    if(n == 0){
        cout<<"Sum of digit is 0";
    }
    else{ 
        int sum = 0;

        while(n>0){
            lastdigit = n % 10;
            sum = sum + lastdigit;
            n /= 10;
        }
        cout<<"The sum of digit is "<<sum;
    }

}