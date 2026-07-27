// Print the pattern 

/*

* * * * *
* * * * *
* * * * *
* * * * *

*/

#include <bits\stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    cout<<endl;
    
    for(int row = 1; row <=n; row++){
        for(int col = 1; col <=n; col++){
            cout<<"* ";    
        }
        cout<<endl;
    }
}