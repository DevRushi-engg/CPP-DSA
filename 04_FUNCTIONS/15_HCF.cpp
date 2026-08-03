#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
    // int hcf = 1;                                   // not optimized solution because it start with 1 to search till highest common factor 
    // for(int i = 1; i <= min(a,b); i++){            // if we look can from the reverse min(a,b) we can find the highest faster at the end we need the hightest common factor.
    //     if(a%i==0 && b%i==0){
    //         hcf = i;
    //     }
    // }
    // return hcf;

    int hcf = 1;
    for(int i = min(a,b); i >= 1; i--){
        if(a%i==0 && b%i==0){
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main(){

    int x;
    cout<<"Enter 1st number: ";
    cin>> x;

    int y;
    cout<<"Ener 2nd number: ";
    cin>>y;

    cout<<gcd(x,y);

}