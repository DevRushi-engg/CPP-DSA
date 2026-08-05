//Write a program to find the product of two numbers using pointers.

#include <bits/stdc++.h>
using namespace std;

int product(int *ptr1,int *ptr2){
    return ((*ptr1) * (*ptr2));
}
int main(){

    int a,b;
    cout<<"Enter 1st number: ";
    cin>>a;

    cout<<"Enter 2nd number: ";
    cin>>b;

    int *ptr1 = &a;
    int *ptr2 = &b;
    cout<<"Product of number is : "<<product(ptr1,ptr2)<<endl;

    
    

}