#include <iostream>
using namespace std;
int power(int x, int y) {
    if (y == 0)
        return 1;
            return x * power(x, y - 1);
}

int main() {
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    cout << base << "^" << exponent << " = " << power(base, exponent) << endl;

    return 0;
}
