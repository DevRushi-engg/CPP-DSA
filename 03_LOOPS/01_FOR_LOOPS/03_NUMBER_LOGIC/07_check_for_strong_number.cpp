// Check if a number is a Strong number.

#include <iostream>
using namespace std;

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    cout << "Enter the integer: ";
    cin >> num;

    if (num <= 0) {
        cout << "Enter a positive number." << endl;
        return 0;
    }

    int original = num;
    int sum = 0;

    // Extract digits and add factorials
    while (num > 0) {
        int remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    // Compare
    if (original == sum) {
        cout << "The number " << original << " is a Strong number." << endl;
    } else {
        cout << "The number " << original << " is NOT a Strong number." << endl;
    }

    return 0;
}
