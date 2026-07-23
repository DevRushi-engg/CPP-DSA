// Write a program to print the sum of number and its reverse number


#include <bits\stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int temp = n;
    int x = 0;

    while(temp > 0){
        x *= 10;
        x += (temp % 10);
        temp /= 10;
    }
    cout<<"sum of "<<n<<" + "<<x<<" = "<<n + x<<endl;
}