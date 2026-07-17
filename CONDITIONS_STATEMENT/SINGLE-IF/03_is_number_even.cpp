// Write a C++ program that accepts an integer from the user. If the number is evenly divisible by 2, display "The number is Even." Otherwise, do not print anything.

#include <bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number to check is it even: ";
    cin>>n;

    if(n%2==0){
        cout<<n<<" is even number.";
    }
}
