// print pattern

/*

        *
      * *
    * * *
  * * * *
* * * * * 

*/


#include <iostream>
using namespace std;

int main(){

    for (int row = 1; row <= 5; row++){
        // spaces
        for(int spc = 1; spc <= 5-row; spc++){
            cout<<" ";
        }
        // column or stars
        for(int col = 1; col <= row; col++){
            cout<<"*";
        }

        cout<<endl;
    }
}