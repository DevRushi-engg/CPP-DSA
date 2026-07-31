//Print pattern
/*

A A A A 
A A A A 

*/


#include <iostream>
using namespace std;

int main(){
    
    for(int row = 1; row <= 2; row++){
        for(int col = 1; col <= 4; col++){
            cout<<"A ";
        }
        cout<< endl;
    }
}