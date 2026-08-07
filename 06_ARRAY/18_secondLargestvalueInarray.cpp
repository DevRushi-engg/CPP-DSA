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

    int max = INT_MIN;

    for(int i = 0 ; i <= n-1; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    cout<<"The Largest value is : "<<max<<endl;

    int smax = INT_MIN;

    for(int i = 0 ; i <= n-1; i++){
        if((smax < arr[i]) && (arr[i] != max)){
            smax = arr[i];
        }
    }

    cout<<"The Second largest value is: "<<smax<<endl;
}