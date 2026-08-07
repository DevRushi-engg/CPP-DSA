// Find the second largest element in given array

// method - 1

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the array elements: ";
    int arr[n];
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }

    int min = INT_MAX;

    for(int i = 0 ; i <= n-1; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    cout<<"The Smallest value is : "<<min<<endl;

    int smin = INT_MAX;

    for(int i = 0 ; i <= n-1; i++){
        if((smin > arr[i]) && (arr[i] != min)){
            smin = arr[i];
        }
    }

    cout<<"The Second smallest value is: "<<smin<<endl;
}