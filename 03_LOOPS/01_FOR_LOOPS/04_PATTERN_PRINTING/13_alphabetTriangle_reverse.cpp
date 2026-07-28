// Print the pattern

/*

* * * * * 
* * * * 
* * * 
* *
*

*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    for(int i = 1;i <= 5;i++){
        for(char j = 'A';j <= 'F'- i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}