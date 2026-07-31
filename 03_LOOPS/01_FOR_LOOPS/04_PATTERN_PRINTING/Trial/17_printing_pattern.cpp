/*

11111
2222
333
44
5

*/

#include <iostream>
using namespace std;

int main(){

    for(int row = 1; row <= 5; row++){

        for(int col = 1; col <= 6-row;col++){
            cout<<row;
        }
        cout<<endl;
    }
}