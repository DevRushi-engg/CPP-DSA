// Calculate the sum of all elements in the given array

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements in the array["<<n<<"] = ";
    // input operation
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }

    int sum = 0;
    // sum operation
    for(int i = 0; i <= n-1; i++){
        sum += arr[i];
    }
    cout<<endl;
    // output
    cout<<"The sum of element of the array["<<n<<"] = "<<sum<<endl;
}