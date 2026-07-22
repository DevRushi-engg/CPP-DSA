// Display this AP 1,3,5,7,9 .......... upto n terms
// Arithemetic Progression is the series or pattern in squence

#include <bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a = 1; // AP start from a = 1

    for(int i = 1; i <= n; i++){
        cout<<a<<endl;
        a+=2;
    }

}