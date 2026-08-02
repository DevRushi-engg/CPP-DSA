#include <bits/stdc++.h>
using namespace std;

int maximum(int a,int b){

    if( a > b ){
        return a;
    }
    else{
        return b;
    }
}

int main(){

    int m,n;
    cout<<"Enter the two number: ";
    cin>> m >> n;

    cout<<"Maximum = " << maximum(m,n);
}