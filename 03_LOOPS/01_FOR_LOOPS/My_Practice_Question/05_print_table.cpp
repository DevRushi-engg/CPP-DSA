// Print the table of N number

#include <bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of which table you want: ";
    cin>>n;

    for(int i = 1; i <= 10; i++){
        cout<<n<<" x "<<i<<" = "<<i*n<<endl;
    }
}