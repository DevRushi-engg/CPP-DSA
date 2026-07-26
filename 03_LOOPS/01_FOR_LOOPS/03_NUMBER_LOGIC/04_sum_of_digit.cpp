// Sum of digits.
#include <bits\stdc++.h>
using namespace std;

int main(){

    long long int n;
    cout<<"Enter the number: ";
    cin>>n;

    int num = n;
    int sum = 0;
    int lastdigit;
    while(num>0){
        lastdigit = num % 10;
        sum += lastdigit;
        num /= 10;
    }
    cout<<"The sum of digit of given number "<<n<<" is "<<sum;
}