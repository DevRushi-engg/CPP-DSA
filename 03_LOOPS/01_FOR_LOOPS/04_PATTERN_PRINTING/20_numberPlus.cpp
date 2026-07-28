// Print the pattern 

/*

     3    
     3    
 1 2 3 4 5
     3    
     3    
    
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"No. of rows: ";
    cin>>n;

    int mid = n/2 + 1;

    cout<<endl;
    
    for(int i = 1; i <= n; i++){
        for(int j =1; j <= n; j++){
            if( i == mid || j == mid){
                cout<<" "<<j;
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}