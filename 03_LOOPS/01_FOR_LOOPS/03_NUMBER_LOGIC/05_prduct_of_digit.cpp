// Product of digits.

// Sum of digits.
#include <bits\stdc++.h>
using namespace std;

int main(){

    long long int n;
    cout<<"Enter the integer: ";
    cin>>n;

    int num = n;
    int product = 1;
    int lastdigit;
    while(num>0){
        lastdigit = num % 10;
        product *= lastdigit;
        num /= 10;
    }
    cout<<"The product of digit of given number "<<n<<" is "<<product<<endl;
}