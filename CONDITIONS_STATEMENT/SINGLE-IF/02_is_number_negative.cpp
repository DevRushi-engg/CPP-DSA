// Write a C++ program that accepts an integer from the user. If the entered number is less than zero, display "The number is Negative." Otherwise, do not print anything.

#include <bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number to check is it negative: ";
    cin>>n;

    if(n<0){
        cout<<n<<" the number is negative."<<endl;
    }
}

