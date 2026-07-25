// Sum of odd numbers up to N.

#include <bits\stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    int sum = 0;
    cout<<"Sum of odd number is: ";
    if(n > 0){ 
        for(int i = 1; i <=n; i++){
            if(i % 2 != 0){
                sum += i;
            }
        }
        cout<<sum<<endl;
    }
    else{
        cout<<"Enter a positive number.";
    }
}