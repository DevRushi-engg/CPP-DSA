//Print the multiplication table of a given number.

#include <bits\stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number for table: ";
    cin>> n;

    cout<< "Table of "<< n <<endl;
    for(int i = 1; i <=10; i++){
        cout<< n << " x " << i << " = " << n * i <<endl;
    }
}