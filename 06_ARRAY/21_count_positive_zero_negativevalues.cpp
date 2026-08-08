#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements in array: ";
    
    for(int i = 0; i <= n-1; i++){
        cin>>arr[i];
    }
    
    int pCount = 0; // Positive Count
    int nCount = 0; // Negative Count
    int zCount = 0; // Zero Count

    
    for(int i = 0 ; i <= n-1; i++){
        if(arr[i] > 0){
            pCount ++;
        }
        else if(arr[i < 0]){
            nCount ++;
        }
        else{
            zCount++;
        }
    }

    cout << "Positive count: " << pCount << endl;
    cout << "Negative count: " << nCount << endl;
    cout << "Zero count: " << zCount << endl;

}