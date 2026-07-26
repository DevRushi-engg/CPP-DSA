// Count digits in a number (using a loop).

#include <bits\stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: ";
    cin >> n;

    int count = 0;

    int lastdigit;

    while(n>0){
        lastdigit = n % 10;
        count++;
        n /= 10;
    }
    cout<<"Total count of digit = "<<count<<endl;
}
