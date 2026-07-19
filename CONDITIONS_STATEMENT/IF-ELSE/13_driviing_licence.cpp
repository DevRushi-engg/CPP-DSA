// According to the law, a person must be 18 years or older to apply for a driving licence.

// Write a C++ program that accepts the person's age and displays either "Eligible for Driving Licence" or "Not Eligible."

#include <bits\stdc++.h>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: 0";
    cin>>age;

    if(age>=18){
        cout<<"Your eligible for Driving Licence."<<endl;
    }
    else{
        cout<<"Your not eligible."<<endl;
    }
}

