// 06_multiplication_table.cpp
// Program to display the multiplication table of a given number using a for loop.

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number to print its multiplication table: ";
    cin >> num;

    cout << "\nMultiplication Table of " << num << ":\n";

    // For loop to print table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        cout << num << " × " << i << " = " << (num * i) << endl;
    }

    // Sample Output:
    // Enter a number to print its multiplication table: 7
    //
    // Multiplication Table of 7:
    // 7 × 1 = 7
    // 7 × 2 = 14
    // 7 × 3 = 21
    // 7 × 4 = 28
    // 7 × 5 = 35
    // 7 × 6 = 42
    // 7 × 7 = 49
    // 7 × 8 = 56
    // 7 × 9 = 63
    // 7 × 10 = 70

    return 0;
}

