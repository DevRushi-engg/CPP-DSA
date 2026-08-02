#include <bits/stdc++.h>
using namespace std;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
double divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return (double)a / b;
}

int main() {
    int choice, a, b;

    while (true) {
        cout << "\n=== Calculator Menu ===\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting calculator...\n";
            break;
        }

        cout << "Enter two numbers: ";
        cin >> a >> b;

        switch (choice) {
            case 1: cout << "Result = " << add(a, b) << endl; break;
            case 2: cout << "Result = " << subtract(a, b) << endl; break;
            case 3: cout << "Result = " << multiply(a, b) << endl; break;
            case 4: cout << "Result = " << divide(a, b) << endl; break;
            default: cout << "Invalid choice!\n";
        }
    }

    return 0;
}
