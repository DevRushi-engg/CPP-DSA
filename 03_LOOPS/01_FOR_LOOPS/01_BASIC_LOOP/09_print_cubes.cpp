// Print cubes of numbers from 1 to N.
#include <bits\stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>> n;

    cout<<"Following are the Cube from 1 to "<<n<<endl;

    for(int i = 1; i <= n ; i++){
        cout<<i<<" cube = "<<i * i * i<<endl;
    }
}