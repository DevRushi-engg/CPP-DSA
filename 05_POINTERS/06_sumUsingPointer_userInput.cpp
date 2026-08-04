#include <bits/stdc++.h>
using namespace std;

int main(){

    int x,y;

    int *p1 = &x;
    int *p2 = &y;

    cout<<"Enter the 1st number: ";
    cin>>*p1;

    cout<<"Enter the 1st number: ";
    cin>>*p2;

    cout<<"Addition = "<<*p1 + *p2;

}