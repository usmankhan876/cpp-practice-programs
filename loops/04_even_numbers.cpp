// 04_even_numbers.cpp
// Program to print all even numbers between 1 and 50.

#include <iostream>
using namespace std;

int main() {
    cout << "Even numbers from 1 to 50 are:" << endl;

    for (int i = 2; i <= 50; i += 2) {  // Start from 2, step by 2
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
