// Write a C++ program that accepts an integer from the user. If the number is not evenly divisible by 2, display "The number is Odd." Otherwise, do not print anything.

#include <bits\stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number is it odd: ";
    cin>>n;

    if(n%2!=0){
        cout<<n<<" is odd number.";
    }
    

}