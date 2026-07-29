//Print the pattern

/*

1 
2 3 
4 5 6 
7 8 9 10

*/


#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Number of rows: ";
    cin>>n;

    int x = 1;

    cout<<endl;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
}