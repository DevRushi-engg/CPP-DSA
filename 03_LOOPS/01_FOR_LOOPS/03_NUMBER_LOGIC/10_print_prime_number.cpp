// Print all prime numbers from 1 to N.

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    cout << "Prime numbers from 1 to " << N << " are: ";

    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
