#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    // 1. Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << " // Addition" << endl;
    cout << "a - b = " << (a - b) << " // Subtraction" << endl;
    cout << "a * b = " << (a * b) << " // Multiplication" << endl;
    cout << "a / b = " << (a / b) << " // Division" << endl;
    cout << "a % b = " << (a % b) << " // Modulus" << endl;

    // 2. Relational Operators
    cout << "\nRelational Operators:" << endl;
    cout << "(a == b) = " << (a == b) << " // Equal to" << endl;
    cout << "(a != b) = " << (a != b) << " // Not equal to" << endl;
    cout << "(a > b)  = " << (a > b) << " // Greater than" << endl;
    cout << "(a < b)  = " << (a < b) << " // Less than" << endl;
    cout << "(a >= b) = " << (a >= b) << " // Greater or equal" << endl;
    cout << "(a <= b) = " << (a <= b) << " // Less or equal" << endl;

    // 3. Logical Operators
    cout << "\nLogical Operators:" << endl;
    cout << "(a > 5 && b < 5) = " << ((a > 5) && (b < 5)) << " // Logical AND" << endl;
    cout << "(a > 5 || b > 5) = " << ((a > 5) || (b > 5)) << " // Logical OR" << endl;
    cout << "!(a > b) = " << (!(a > b)) << " // Logical NOT" << endl;

    // 4. Bitwise Operators
    cout << "\nBitwise Operators:" << endl;
    cout << "(a & b) = " << (a & b) << " // Bitwise AND" << endl;
    cout << "(a | b) = " << (a | b) << " // Bitwise OR" << endl;
    cout << "(a ^ b) = " << (a ^ b) << " // Bitwise XOR" << endl;
    cout << "(~a) = " << (~a) << " // Bitwise NOT" << endl;
    cout << "(a << 1) = " << (a << 1) << " // Left shift" << endl;
    cout << "(a >> 1) = " << (a >> 1) << " // Right shift" << endl;

    // 5. Assignment Operators
    cout << "\nAssignment Operators:" << endl;
    int c = 5;
    cout << "c = 5 -> " << c << endl;
    c += 2; cout << "c += 2 -> " << c << endl;
    c -= 1; cout << "c -= 1 -> " << c << endl;
    c *= 3; cout << "c *= 3 -> " << c << endl;
    c /= 2; cout << "c /= 2 -> " << c << endl;
    c %= 2; cout << "c %= 2 -> " << c << endl;

    // 6. Increment/Decrement Operators
    cout << "\nIncrement/Decrement Operators:" << endl;
    int d = 5;
    cout << "d++ = " << d++ << " // Post-increment" << endl;
    cout << "Now d = " << d << endl;
    cout << "++d = " << ++d << " // Pre-increment" << endl;
    cout << "d-- = " << d-- << " // Post-decrement" << endl;
    cout << "Now d = " << d << endl;
    cout << "--d = " << --d << " // Pre-decrement" << endl;

    // 7. Conditional (Ternary) Operator
    cout << "\nConditional (Ternary) Operator:" << endl;
    int max = (a > b) ? a : b;
    cout << "max = (a > b ? a : b) -> " << max << endl;

    // 8. sizeof Operator
    cout << "\nsizeof Operator:" << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(a) = " << sizeof(a) << endl;

    // 9. Pointer Operators
    cout << "\nPointer Operators:" << endl;
    int x = 42;
    int* ptr = &x; // & gives address, * dereferences
    cout << "Address of x (&x) = " << ptr << endl;
    cout << "Value at ptr (*ptr) = " << *ptr << endl;

    // 10. Comma Operator
    cout << "\nComma Operator:" << endl;
    int y = (a++, b++); // evaluates a++, then b++, result is b++
    cout << "y = (a++, b++) -> " << y << endl;

    return 0;
}
