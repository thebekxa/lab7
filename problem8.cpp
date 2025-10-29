#include <iostream>
using namespace std;
bool increasevalue(int n) {
    if (n < 10)
        return true;

    int lastDigit = n % 10;
    int nextDigit = (n / 10) % 10;
    if (nextDigit >= lastDigit)
        return false;
    return increasevalue(n / 10);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (increasevalue(num))
        cout << num << " consists of increasing numbers." << endl;
    else
        cout << num << " does not have increasing digits." << endl;
    return 0;
}
