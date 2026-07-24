//Print all odd numbers from 1 to N.

#include <bits\stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin >>n;

    for(int i = 1; i <= n; i += 2){
        cout<< i << endl;
    }
}