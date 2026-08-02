/*
combination = nCr = n! / r! * (n-1)!
permutation = nPr = n! / (n-1)!

*/


#include <bits/stdc++.h>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i = 2; i <= x; i++){
        f *= i;
    }
    return f;
}

int combination(int n, int r){
    int ncr = fact(n)/ (fact(r) * fact(n-r));
    return ncr;
}

int permutation(int n, int r){
    int npr = fact(n)/ fact(n-r);
    return npr;
}

int main(){

    int choice,n,r;

    while(true){

        cout << "\n=== Menu ===\n";
        cout << "1. Perform Combination\n";
        cout << "2. Perform Permutation\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){

            case 1:

                cout<<"Enter the n: ";
                cin>>n;
                cout<<"Enter the r: ";
                cin>>r;

                cout<<"Combination is: "<<combination(n, r);
                break;
            
            case 2:
            
                cout<<"Enter the n: ";
                cin>>n;
                cout<<"Enter the r: ";
                cin>>r;

                cout<<"Combination is: "<<permutation(n, r);
                break;

            case 3:

                cout<<"Exiting Program......";
                return false;

            default:
                cout<<"Invalid choice, Try again.";
                break;
        }
    }

}