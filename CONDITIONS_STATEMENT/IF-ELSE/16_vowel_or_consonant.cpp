/*Write a C++ program that accepts a single English alphabet character.

If the character is one of A, E, I, O, U (or lowercase equivalents), display "Vowel." Otherwise, display "Consonant."*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character to check for vowels or consonant: ";
    cin>>ch;

    if((ch == 'A' || ch == 'a') || (ch == 'E' || ch == 'e') || (ch == 'I' || ch == 'i') || (ch == 'O' || ch == 'o') || (ch == 'U' || ch == 'u')){
        cout<<"The character is vowel.";
    }

    else{
        cout<<"The character is consonant.";
    }
}