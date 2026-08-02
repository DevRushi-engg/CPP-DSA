#include <bits/stdc++.h>
using namespace std;

void evenOdd(int x){
    
    if( x % 2 == 0 ){
        cout<<x<<" is even.";
    }
    else{
        cout<<x<<" is odd.";
    }

}

int main(){
    cout<<"------------------"<<endl;
    cout<<"    EVEN OR ODD   "<<endl;
    cout<<"------------------"<<endl;

    int a;
    cout<<"Enter a number to test even or odd: ";
    cin>>a;

    evenOdd(a);
}