/*
Even row number input: 4
0 1 0 1 
1 0 1 
0 1 
1 

Odd row number input: 5
1 0 1 0 1 
0 1 0 1 
1 0 1 
0 1 
1 

*/

/*

using math method 

1 
0 1 
1 0 1 
0 1 0 1 

*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of row: ";
    cin>>n;

    cout<<endl;
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= n+1-i; j++){
            if((i+j) % 2 == 0){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }

}