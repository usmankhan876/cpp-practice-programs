// 05_factorial.cpp
// Program to calculate the factorial of a number using for loop.
// This version shows the factorial calculation in mathematical form.

#include <iostream>
using namespace std;

int main() {
    int n;
    int factorial = 1; // Using int for simplicity

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "\n" << n << "! = ";  // Example: "5! = "

        // Loop to show the multiplication steps
        for (int i = n; i >= 1; i--) {
            cout << i;
            if (i > 1) {
                cout << " × "; // show multiplication sign between numbers
            }
            factorial = factorial * i; // multiply factorial by i
        }

        cout << " = " << factorial << endl; // show the final result
    }

    // Sample Output:
    // Enter a positive integer: 5
    //
    // 5! = 5 × 4 × 3 × 2 × 1 = 120

    return 0;
}
