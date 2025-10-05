#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {2, 4, 6, 8, 10};

    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
