// Print the pattern

/*

 1           7
   2       6  
     3   5    
       4      
     3   5    
   2       6  
 1           7


*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"NO. of rows: ";
    cin>>n;

    cout<<endl;

    for(int i =1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if( i == j || i+j == n+1){
                cout<<" "<<j;
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}