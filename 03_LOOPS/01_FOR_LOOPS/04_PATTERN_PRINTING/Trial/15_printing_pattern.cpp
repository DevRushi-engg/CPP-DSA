/*

A
BB
CCC
DDDD
EEEEE

*/

#include <iostream>
using namespace std;

int main(){

    for(char row = 'A'; row <= 'E'; row++){

        for(char col = 'A'; col <= row;col++){
            cout<<row;
        }
        cout<<endl;
    }
}