// Refencing and dereferencing in pointer 


#include <bits/stdc++.h>
using namespace std;

int main(){

    int x = 9;

    // Referencing - storing the address of x in *ptr to create a reference
    int *ptr = &x;

    cout<<ptr<<endl; // printing the address of the x

    // dereferencing (*) - using the referencing to print the actual value of the x using address store in the pointer.

    int b = *ptr; // store the deference value means actual value of x in b then printed it we can also do cout<<*ptr
    cout<<b<<endl;
    cout<<*ptr<<endl; // we can also do cout<<*ptr
}