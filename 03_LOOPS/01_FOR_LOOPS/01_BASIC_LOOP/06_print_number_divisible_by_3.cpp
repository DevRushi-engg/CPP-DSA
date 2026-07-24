// Print all numbers divisible by 3 from 1 to N.

#include <bits\stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"Following are the number divisible by 3"<<endl;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            cout<<i<<endl;
        }
    }
}