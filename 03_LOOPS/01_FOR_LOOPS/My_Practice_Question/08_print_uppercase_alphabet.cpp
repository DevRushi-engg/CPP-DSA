// Print all the Uppercase Alphabets with their ASCII values

#include <bits\stdc++.h>
using namespace std;

int main(){
    cout<<"Alphabets"<<"  "<<" ASCII_Values"<<endl;
    for(char ch = 'A'; ch <= 'Z'; ch++){
        for(char c = 'a'; c <= 'z'; c++){}
        cout<<"   "<<ch<<"   "<<"   =  "<<"   "<<(int)ch<<endl;
    }
}