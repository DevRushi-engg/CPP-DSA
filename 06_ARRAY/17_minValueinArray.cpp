

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

    cout<<"The maximum value is : "<<min<<endl;
}