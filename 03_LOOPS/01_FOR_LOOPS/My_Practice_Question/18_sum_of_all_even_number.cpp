// Write a program to to print the sum of all the even digits of a given number.

#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int temp;
    int x;
    int sum = 0;

    while(n>0){
        x = n % 10;
        if(x % 2 == 0){
            sum += x;
        }
        n /= 10;
    }
    if(sum == 0){
        cout<<"There are not even digit in given number.";
    }
    else{
        cout<<"The sum of all the even digit in number is "<<sum<<endl;
    }
}
