#include <iostream>
using namespace std;
#include <cmath>

int countDigits(int n) {
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}
int reverseNumber(int n) {
    if (n < 10)
        return n;
    int digits = countDigits(n) - 1;
    int lastDigit = n % 10;
    return lastDigit * pow(10, digits) + reverseNumber(n / 10);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number: " << reverseNumber(num) << endl;

    return 0;
}
