// Print the pattern

/*

1  2  3  4  5 
1  2  3  4  5
1  2  3  4  5
1  2  3  4  5
1  2  3  4  5

*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of row: ";
    cin>>n;

    cout<<endl;

    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= n; col++){
            cout<<col<<"  ";
        }
        cout<<endl;
    }
}