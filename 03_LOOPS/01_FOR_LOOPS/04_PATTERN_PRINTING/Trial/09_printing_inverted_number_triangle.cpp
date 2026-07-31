//printing inverted triangle

/*

1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 

*/

#include <iostream>
using namespace std;

int main(){
    for(int row = 1; row <= 5; row++){
        for(int col = 1; col <= 6-row; col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}