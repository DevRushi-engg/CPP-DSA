
/*

     A B C D E 
    A B C D E 
   A B C D E 
  A B C D E 
 A B C D E 

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
            cout<< (char)(j+64)<<" ";
        }
        cout<<endl;
    }

}