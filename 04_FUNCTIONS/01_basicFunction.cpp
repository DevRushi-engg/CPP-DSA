#include <bits/stdc++.h>
using namespace std;

int sum(int a,int b){
    cout<<"Sum of "<<a<<" + "<<b<<" = "<<a+b;
}

int main(){
    cout<<"#########################"<<endl;
    cout<<"         Addition        "<<endl;
    cout<<"#########################"<<endl;

    int x, y;
    cout<<"Enter the first Number: ";
    cin>>x;
    cout<<"Enter the second Number: ";
    cin>>y;

    sum(x, y);
}