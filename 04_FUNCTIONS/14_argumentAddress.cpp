#include <bits/stdc++.h>
using namespace std;
// Both function and main function variable address are differents not same.
void fun(int x, int y){        //fun(int x, int y) are formal parameter.
    cout<<"Function x address : "<<&x;
    cout<<"Function y address : "<<&y;
}
int main(){
    int x = 9;
    int y = 10;
    cout<<"main x address : "<<&x;
    cout<<"main y address : "<<&y;
    fun(x,y); //fun(x,y) are actual parameter.
}