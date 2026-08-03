#include <bits/stdc++.h>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i = 2; i <= x; i++){
        f *= i;
    }
    return f;
}

int combination(int n, int r){
    int ncr = fact(n)/ (fact(r) * fact(n-r));
    return ncr;
}

int main(){
    int size;
    cout<<"Enter the size of the Triangle: ";
    cin>>size;

    for(int i = 0; i <= size; i++){
        for(int j = 0; j <= i; j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}