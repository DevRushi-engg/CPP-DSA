// Find the element x in array. Take array & x as input 

//normal code

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

    int x;
    cout<<"Enter the x element: ";
    cin>>x;

    for(int i = 0; i <= n-1; i++){
        if(arr[i] == x){
            cout<<"Elements present";
        }
    }
}