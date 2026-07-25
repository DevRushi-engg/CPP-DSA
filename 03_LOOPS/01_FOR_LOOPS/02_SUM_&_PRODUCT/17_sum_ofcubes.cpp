// Sum of cubes from 1 to N.

#include <bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum += (i * i);
    }
    cout<<"Sum of cubes of numbers is : "<<sum<<endl;
}