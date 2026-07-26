// Check if a number is an Armstrong number.

// #include <bits\stdc++.h>
// using namespace std;

// Logic i implemented only work for 3 digit armstrong
/*int main(){

    int num;
    cout<<"Enter the integer: ";
    cin>>num;

    int orignal;
    int sum = 0;
    int n;
    orignal = num;
    int remainder;
    if(num <= 0){
        cout<<"Enter a positive number.";
    }
    else{ 
        while(num > 0){
            remainder = num % 10;
            n = remainder;
            sum += (n * n * n);
            num /= 10;
        }
        if(orignal == sum){
            cout<<"The number "<<orignal<<" is Armstrong number.";
        }
        else{
            cout<<"The number "<<orignal<<" is not Armstrong number.";
        }
    }
}*/

// following is for all digit number to check armstrong

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the integer: ";
    cin >> num;

    if (num <= 0) {
        cout << "Enter a positive number." << endl;
        return 0;
    }

    int original = num;
    int sum = 0;

    // Step 1: Count digits
    int digits = 0;
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // Step 2: Extract digits and compute power manually
    temp = num;
    while (temp > 0) {
        int remainder = temp % 10;

        // compute remainder^digits using a loop
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }

        sum += power;
        temp /= 10;
    }

    // Step 3: Compare
    if (original == sum) {
        cout << "The number " << original << " is an Armstrong number." << endl;
    } else {
        cout << "The number " << original << " is NOT an Armstrong number." << endl;
    }

    return 0;
}
