#include <bits/stdc++.h>
using namespace std;

// Function to print a right-angled star triangle
void starTri(int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {

    int choice;

    while(true){
        cout << "\n=== Menu ===\n";
        cout << "1. Print Star Triangle\n";
        cout << "2. Print Custom Number of Triangle\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;


        switch (choice){

            case 1:
                int size;
                cout<<"Enter the size of the triangle: ";
                cin>>size;
                starTri(size);
                break;
        
            case 2:
                int numberOftriangle;

                cout<<"How many triangles you want to print: ";
                cin>>numberOftriangle;

                for(int t = 1; t <= numberOftriangle; t++){

                    int size;
                    cout<<"Enter the size of the triangle: ";
                    cin>>size;

                    cout<<endl;
                    cout<<"Traingle #"<<t<<endl<<endl;
                    starTri(size);
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
