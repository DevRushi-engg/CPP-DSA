/*
    1
   121
  12321
 1234321
123454321


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
            cout<<j;
        }
        for(int m = i - 1; m >= 1; m--){
            cout<<m;
        }
        cout<<endl;
    }

}