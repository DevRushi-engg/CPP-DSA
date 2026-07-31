//Print pattern
/*

1 1 1 
1 1 1 
1 1 1 

*/

#include <iostream>
using namespace std;

int main(){

    for(int row = 1; row <= 3; row++){
        for(int col = 1; col <= 3; col++){
            cout<<"1 ";
        }
        cout<< endl;
    }
}