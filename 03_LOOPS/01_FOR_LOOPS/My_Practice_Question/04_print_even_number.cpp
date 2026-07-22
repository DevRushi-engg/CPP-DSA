// Print the even number (if method)

#include <bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
}