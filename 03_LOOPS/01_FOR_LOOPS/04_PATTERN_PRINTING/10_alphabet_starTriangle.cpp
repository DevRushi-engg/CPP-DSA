// Print the pattern 

/*

A
A B
A B C 
A B C D
A B C D E

*/

#include <bits\stdc++.h>
using namespace std;

int main(){

    char n;
    cout<<"Enter number of rows: ";
    cin>>n;

    cout<<endl;

    for(char i = 'A'; i <= n; i++){
        for(char j ='A'; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}