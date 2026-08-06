#include <bits/stdc++.h>
using namespace std;

int main(){
    // define a 2d array
    // int arr[3][4];

    // initialize the 2d array
    int arr[3][4] = {
        {1,2,3,4},
        {2,3,4,5},
        {5,6,7,8}
    };

    cout<<endl;
    //print the 2d array
    for(int i = 0 ; i< 3 ; i++){
        cout<<"[ ";
        for(int j = 0 ; j < 4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
}