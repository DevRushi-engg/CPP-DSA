//Print pattern
/*

5 
5 5 
5 5 5 
5 5 5 5 
5 5 5 5 5 


*/

#include <iostream>
using namespace std;

int main(){
    for(int row = 1; row <= 5; row++)
    {
        for(int col = 1; col <= row; col++){
            cout<<5<<" ";
        }
        cout<<endl;
    }
}