// Passing by reference

// Writing the swapping function using pointer


#include <bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){ // this store the address of the a and b;

    int temp = *x; // store the dereference value of a

    *x = *y; // here *x get updated with dereference of *y i.e 6 

    *y = temp; // here *y get updated with temp i.e 9

    cout<<"After Swap : "<<*x<<" "<<*y<<endl;
}

int main(){

    int a = 9, b = 6;

    cout<<"Before swap: "<<a<<" "<<b<<endl;

    swap(&a,&b); // Address of the a and b is pass to the swap function.

}