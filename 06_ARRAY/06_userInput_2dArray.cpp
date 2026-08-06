#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cout<<"Enter the 2d array size : ";
    cin>> m>> n;
    int arr[m][n];

    cout<<"Enter the elements for the array["<<m<<"]"<<"["<<n<<"]: ";
    for(int i = 0; i < m; i++){
        for(int j = 0 ;j < n; j++){
            cin>>arr[i][j];
        }
    };

    cout<<"The array of the array["<<m<<"]"<<"["<<n<<"]: "<<endl;
    for(int i = 0; i < m; i++){
        cout<<"[";
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
}