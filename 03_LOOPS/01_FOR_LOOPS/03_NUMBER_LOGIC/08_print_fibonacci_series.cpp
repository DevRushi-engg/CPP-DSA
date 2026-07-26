// Print Fibonacci series (using for).

#include <bits\stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int a, b ,sum;

    a = 0;
    b = 1;
    sum =0;

    cout<<"The fibonacci series is : 1 ";

    for(int i = 1; i <= n; i++){
        sum = a + b;
        a = b;
        b =sum;

        cout<<sum<<" ";
    }

}