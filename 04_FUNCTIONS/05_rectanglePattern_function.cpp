#include <bits/stdc++.h>
using namespace std;

// Function to print a right-angled star triangle
void recPattern(int x,int y) {
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {

    int choice;

    while(true){
        cout << "\n=== Menu ===\n";
        cout << "1. Print Star Rectangle\n";
        cout << "2. Print Custom Number of Rectangle\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;


        switch (choice){

            case 1:
                int row;
                cout<<"Enter the number rows for rectangle: ";
                cin>>row;
                int col;
                cout<<"Enter the number columns for rectangle: ";
                cin>>col;
                recPattern(row,col);
                break;
        
            case 2:
                int numberOfrectangle;

                cout<<"How many rectangle you want to print: ";
                cin>>numberOfrectangle;

                for(int t = 1; t <= numberOfrectangle; t++){

                    int row;
                    cout<<"Enter the number rows for rectangle: ";
                    cin>>row;
                    int col;
                    cout<<"Enter the number columns for rectangle: ";
                    cin>>col;

                    cout<<endl;
                    cout<<"Rectangle #"<<t<<endl<<endl;
                    recPattern(row,col);
                    cout<<endl;
                }
                break;
         
            case 3:
                cout << "Exiting program...\n";
                return false;    
        
            default:
                cout << "Invalid choice, try again.\n";
                break;
        }
    }
}
