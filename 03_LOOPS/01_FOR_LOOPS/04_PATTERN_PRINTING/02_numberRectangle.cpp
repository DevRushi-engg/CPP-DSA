// Print the pattern

/*

1 2 3 4 5
1 2 3 4 5 
1 2 3 4 5

*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    int row;
    cout<<"Number of row: ";
    cin>>row;

    int col;
    cout<<"Number of col: ";
    cin>>col;

    cout<<endl; 
    
    for(int i = 1; i <= row; i++){
        for(int j = 1;  j <= col; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}