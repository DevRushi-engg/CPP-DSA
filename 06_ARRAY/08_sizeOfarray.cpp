#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[]= {2,5,6,98};

    int n = sizeof(arr)/sizeof(arr[5]);

    cout<<&arr[0]<<endl;   // 0x61fefc
    cout<<&arr[1]<<endl;  // 0x61ff00
    cout<<&arr[3]<<endl;  // 0x61ff08
    cout<<&arr[4]<<endl;  // 0x61ff0c

    // &arr and arr both provide the address. the address is a starting point arrary
    cout<<&arr<<endl;// 0x61fefc
    cout<<arr<<endl;// 0x61fefc

}