// find the size of variables or data types using sizeof() operators

#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Size of integer: "<<sizeof (int)<<" bytes"<<endl;
    cout<<"Size of float: "<<sizeof (float)<<" bytes"<<endl;
    cout<<"Size of bool: "<<sizeof (bool)<<" bytes"<<endl;
    cout<<"Size of long long: "<<sizeof (long long)<<" bytes"<<endl;
    cout<<"Size of double: "<<sizeof (double)<<" bytes"<<endl;

    // Now find the address of the variable in memory using the & operator

    int x = 9;
    cout<<"The address of the x: "<<&x<<endl;

}