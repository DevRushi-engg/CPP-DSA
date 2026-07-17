// Write a C++ program that accepts a single English alphabet character from the user. If the entered character is an uppercase letter (A to Z), display "Uppercase Letter." Otherwise, do not print anything.

#include <bits\stdc++.h>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a charcter to check is it in uppercase: ";
    cin>>ch;

    if(ch >= 'A' && ch <='Z'){
        cout<<ch<<" is uppercase character.";
    }
}