// Write a program to check if a given input number is prime or not

#include <bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number to check: ";
    cin>>n;
    bool flag =true; //true means prime number
    for(int i = 2; i <= n-1; i++){
        if(n % i == 0){
            flag =false;
        }
    }
    if(n == 1){
        cout<<" 1 is neither prime nor composite number.";
    }
    else if(flag == true){
        cout<<n<<" is the prime number.";
    }
    else{
        cout<<n<<" is the composite number.";
    }
}