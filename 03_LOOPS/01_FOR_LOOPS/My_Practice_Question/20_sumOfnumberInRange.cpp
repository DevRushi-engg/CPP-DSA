/*
Sum of Numbers in a Range
Take two integers start and end. Find the sum of all numbers between them.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int start,end;
    cout<<"Enter the start number: ";
    cin>>start;

    cout<<"Enter the last number: ";
    cin>>end;

    int sum = 0;

    for(int i = start; i <= end; i++){
        sum += i;
    }

    cout<<"The sum of number between the range "<<start<<" and "<<end<<" = "<<sum;
}