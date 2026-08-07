//  count the number of element in the given array greater than the given value of x;


#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements: ";

    for(int i = 0 ; i <= n-1; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the value of x: ";
    cin>>x;

    int count = 0;

    for(int i = 0; i <= n-1; i++){
        if(arr[i] > x){
            count++;
        }
    }

    cout<<"The total count is : "<<count<<endl;
}