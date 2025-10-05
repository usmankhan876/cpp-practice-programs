// 03_multiplication_table.cpp
// Program to display multiplication table of a number.

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number to print its multiplication table: ";
    cin >> num;

    // Print table up to 10
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
