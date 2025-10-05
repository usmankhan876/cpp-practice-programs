// 02_sum_of_n_numbers.cpp
// Program to calculate the sum of first N natural numbers using for loop.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    // Add all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i; // same as sum = sum + i
    }

    cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
