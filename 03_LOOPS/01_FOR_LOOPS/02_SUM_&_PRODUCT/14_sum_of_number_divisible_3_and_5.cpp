// Sum of numbers divisible by both 3 and 5.

#include <bits\stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int sum = 0;

    cout<<"Sum of the numbers divisible by 3 and 5: ";
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 && i % 5 == 0){
            sum += i;
        }
    }
    cout<<sum<<endl;
}