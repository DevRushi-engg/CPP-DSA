//Print pattern
/*

A 
A B 
A B C 
A B C D 
A B C D E 

*/

#include <iostream>
using namespace std;

int main(){
    for(char row = 'A'; row <= 'E'; row++)
    {
        for(char col = 'A'; col <= row; col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}