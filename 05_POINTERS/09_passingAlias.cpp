// Passing by reference using alias

// Writing the swapping function using pointer minor change first storing the address in pointer in main then passing it to function

#include <bits/stdc++.h>
using namespace std;

void swap(int &x,int &y){

    int temp = x; 

    x = y; 

    y = temp; 

    cout<<"After Swap : "<<x<<" "<<y<<endl;
}

int main(){

    int a = 9, b = 6;

    cout<<"Before swap: "<<a<<" "<<b<<endl;
    
    swap(a, b); // stored Address of the a and b is pass to the swap function.

}