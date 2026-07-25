// Find the smallest number from 1 to N.

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 0;
    }

    int smallest = 1;

    for (int i = 2; i <= N; i++) {
        if (i > smallest) {
            smallest = i; 
        }
    }

    cout << "The smallest number from 1 to " << N << " is: " << smallest << endl;

    return 0;
}
