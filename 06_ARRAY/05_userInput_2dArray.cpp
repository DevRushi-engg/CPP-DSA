#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[5][6];

    cout<<"Enter the elements for the array[5][6]: ";
    for(int i = 0; i < 5; i++){
        for(int j = 0 ;j < 6; j++){
            cin>>arr[i][j];
        }
    };

    cout<<"The array of the array[5][6]: "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<"[ ";
        for(int j = 0; j < 6; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<" ]"<<endl;
    }
}