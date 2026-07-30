/*
    A 
   A B 
  A B C 
 A B C D 
A B C D E 

*/


#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"No of rows: ";
    cin>>n;

    for(int i = 1; i <= n; i++){

        for(int k = 1; k <= n-i; k++){
            cout<<" ";
        }
        for(int j = 1; j <= i; j++){
            cout<<(char)(j + 64)<<" ";
        }
        cout<<endl;

    }
}