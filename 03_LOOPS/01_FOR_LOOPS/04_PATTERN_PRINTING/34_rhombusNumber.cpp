
/*

     1 2 3 4 5 
    1 2 3 4 5 
   1 2 3 4 5 
  1 2 3 4 5 
 1 2 3 4 5 


*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"no of rows: ";
    cin>>n;


    for(int i = 1; i <= n; i++){

        for(int k = 1; k <= n+1-i; k++){
            cout<<" ";
        }
        for(int j = 1; j <=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}