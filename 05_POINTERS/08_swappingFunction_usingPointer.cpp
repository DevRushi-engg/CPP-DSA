// Passing by reference

// Writing the swapping function using pointer minor change first storing the address in pointer in main then passing it to function

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
    int *x = &a;
    int *y = &b;
    swap(x, y); // stored Address of the a and b is pass to the swap function.

}