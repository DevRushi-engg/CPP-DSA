// Print squares of numbers from 1 to N.

#include <bits\stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>> n;

    cout<<"Following are the Square from 1 to "<<n<<endl;

    for(int i = 1; i <= n ; i++){
        cout<<i<<" sq = "<<i * i<<endl;
    }
}