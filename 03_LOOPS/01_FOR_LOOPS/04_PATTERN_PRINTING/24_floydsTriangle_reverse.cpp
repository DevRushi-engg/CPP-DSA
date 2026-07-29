// Print the pattern 

/*

10 11 12 13 
14 15 16 
17 18 
19 

*/


#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Number of rows : ";
    cin>>n;

    int x = 10;

    cout<<endl;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n+1-i; j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
}