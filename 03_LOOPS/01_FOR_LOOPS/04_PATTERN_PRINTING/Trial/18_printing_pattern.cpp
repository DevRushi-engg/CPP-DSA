// print reverse number triangle

/*

1
2 1
3 2 1
4 3 2 1 
5 4 3 2 1


*/

#include <iostream>
using namespace std;

int main(){
    
    for(char row = 'A'; row <= 'E'; row++)
    {
        for (char col = row; col >= 'A'; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
}
