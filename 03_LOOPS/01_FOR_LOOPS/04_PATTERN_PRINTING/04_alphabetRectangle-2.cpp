//Print pattern

/*

A B C D E
A B C D E
A B C D E

*/

#include <bits\stdc++.h>
using namespace std;

int main(){

    cout<<endl; 
    
    for(char i = 'A'; i <= 'C'; i++){
        for(char j = 'A';  j <= 'E'; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}