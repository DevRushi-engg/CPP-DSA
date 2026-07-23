// print the sum of this series 1-2+3-4+5-6........ upto n terms


#include <bits\stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the nth term: ";
    cin>>n;

    int sum = 0;
    int p = 1;

    // to print the series
    while(p <= n){
        if(p % 2 == 0){
            if(p == n){
                cout<<p;
            }
            else{
                cout<<p<<" + ";
            }
        }
        else if(p % 2 != 0){
            if(p == n){
                cout<<p;
            }
            else{
                cout<<p<<" - ";
            }
        }
        p++;
    }

    // to print the sum of series
    for(int i=1; i <= n; i++){
        if(i%2==0){
            sum -= i;
        }
        else{
            sum += i;
        }
    }
    cout<<endl<<"Sum of the series is "<<sum;
}