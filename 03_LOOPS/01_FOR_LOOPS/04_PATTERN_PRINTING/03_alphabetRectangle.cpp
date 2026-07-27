//Print pattern

/*

A B C D E
A B C D E
A B C D E

*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    char row;
    cout<<"alphabet of row: ";
    cin>>row;

    char col;
    cout<<"alphabet of col: ";
    cin>>col;

    cout<<endl; 
    
    for(char i = 'A'; i <= row; i++){
        for(char j = 'A';  j <= col; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}