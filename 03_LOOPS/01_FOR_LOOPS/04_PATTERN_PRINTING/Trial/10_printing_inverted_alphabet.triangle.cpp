//printing inverted triangle

/*

A B C D E 
A B C D 
A B C 
A B 
A  

*/

#include <iostream>
using namespace std;

int main(){
    for(int row = 1; row <= 5; row++){
        for(char col = 'A'; col <= 'F'-row; col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
