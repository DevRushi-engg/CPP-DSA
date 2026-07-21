/*Create a simple login system.

First, ask the user to enter a username.

If the username is correct, ask for the password.

Display "Login Successful" only if both username and password are correct. Otherwise, display an appropriate error message.*/

#include <bits\stdc++.h>
using namespace std;

int main(){
    cout<<"------------------------------"<<endl;
    cout<<"        LOGIN SYSTEM          "<<endl;
    cout<<"------------------------------"<<endl<<endl;

    string user_name="Rushi";
    int user_pass= 1234;
    
    string check_user;
    cout<<"Enter your user_name: ";
    cin>>check_user;

    if(check_user == user_name){
        int check_pass;
        cout<<"Enter your password: ";
        cin>>check_pass;

        if(check_pass == user_pass){
            cout<<"Login Successful"<<endl;
        }
        else{
            cout<<"Password is incorrect"<<endl;
        }   
    }
     else {
        cout<<"Username is incorrect"<<endl; 
    } 

}