// Average of first N numbers.

#include <bits\stdc++.h>
using namespace std;

int main(){


    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int sum =0;

    for(int i = 1; i <= n; i++){

        sum += i;

    }

    double avg = (sum)/n;
    cout<<"The average of number is:( 1 + 2 + 3 + 4.........n): "<<avg<<endl;
    
}