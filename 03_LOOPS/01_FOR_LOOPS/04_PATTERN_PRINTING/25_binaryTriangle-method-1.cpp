/*

using extra variable method 

1 
0 1 
1 0 1 
0 1 0 1 

*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of row: ";
    cin>>n;

    int a = 2; // asssign the a with any value we just need it as boolean output

    for(int i = 1; i <= n;i++){
        // due to this condition it print the 1 at start of odd row number
        if(i % 2 != 0){
            a = 1;
        }
        else{
            a = 0;
        }
        for(int j = 1; j <= i; j++){
            cout<<a<<" ";
            // for alternative printing we do the flipping of a
            if(a == 1){
                a = 0;
            }
            else{
                a = 1;
            }
        }
        cout<<endl;
    }

}