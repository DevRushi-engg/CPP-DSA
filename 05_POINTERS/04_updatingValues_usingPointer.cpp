#include <bits/stdc++.h>
using namespace std;

int main(){

    int x =190;

    int *ptr = &x;

    // x = 90 this is how we do it traditionally update the x value or variable value 

    *ptr = 90; // this is how we update the values of variable using the pointer.

    cout<<*ptr;
 
}