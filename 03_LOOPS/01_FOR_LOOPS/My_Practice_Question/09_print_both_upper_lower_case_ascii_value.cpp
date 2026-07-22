// Print all the Uppercase & Lowercase Alphabets with their ASCII values

// Print all the Uppercase Alphabets with their ASCII values

#include <bits\stdc++.h>
using namespace std;

int main(){
    cout<<"Uppercase"<<"  "<<"    ASCII"<<"   |     "<<"Lowercase"<<"  "<<"    ASCII"<<endl;
    for(char upper = 'A', lower = 'a'; upper <= 'Z' && lower <= 'z'; upper++, lower++){
        cout<<"   "<<upper<<"   "<<"   =  "<<"   "<<(int)upper<<"     |     "<<"   "<<lower<<"   "<<"   =  "<<"   "<<(int)lower<<endl;
    }
}