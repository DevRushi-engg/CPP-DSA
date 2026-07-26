// Check if a number is a palindrome.

#include <bits\stdc++.h>
using namespace std;

int main(){
    int num;
    int reversed = 0;
    int remainder;
    int orignal;

    cout<<"Enter  number: ";
    cin>>num;

    orignal = num;

    while(num != 0){
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if(orignal == reversed){
        cout<<orignal<<" is the palindrome.";
    }
    else{
        cout<<orignal<<" is not the palindrome.";
    }
    return 0;
}