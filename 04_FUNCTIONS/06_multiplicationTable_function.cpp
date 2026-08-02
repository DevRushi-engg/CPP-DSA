#include <bits/stdc++.h>
using namespace std;

void table(int x){

    for(int i = 1; i <= 10; i++){
        cout<< x << " x " << i << " = " <<x*i<<endl;
    }
}

int main(){
    cout<<"------------------"<<endl;
    cout<<"      TABLES      "<<endl;
    cout<<"------------------"<<endl;
    int a;
    cout<<"Enter table number: ";
    cin>>a;
    
    table(a);
}