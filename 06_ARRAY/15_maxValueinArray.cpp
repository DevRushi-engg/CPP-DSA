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

    int max = arr[0];

    for(int i = 1 ; i <= n-1; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    cout<<"The maximum value is : "<<max<<endl;
}