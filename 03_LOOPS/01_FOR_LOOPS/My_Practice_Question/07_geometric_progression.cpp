// Display this GP 1,2,4,8 ................. upto N terms
//  Geometric Progression is the series or pattern in sequence.Each term is obtained by multiplying by a fixed number (called the common ratio)

#include <bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Nth term: ";
    cin>>n;

    int a = 1;

    for(int i = 1; i <= n; i++){
        cout<<a<<endl;
        a *= 2;
    }
}