//Print the pattern

/*

A  B  C  D
A  B  C  D
A  B  C  D
A  B  C  D

*/

#include <bits\stdc++.h>
using namespace std;

int main(){

    char c;
    cout<<"Enter the alphabet: ";
    cin>>c;

    cout<<endl;

    for(char i = 'A'; i <= c; i++){
        for (char j = 'A'; j <= c; j++){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
}