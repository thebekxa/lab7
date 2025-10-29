#include <iostream>
#include <cmath>
using namespace std;
bool PrimeR(int n, int i) {
    if (n <= 1)
        return false;
    if (i > sqrt(n))
        return true;
    if (n % i == 0)
        return false;
    return PrimeR(n, i + 1);
}

bool isPrime(int n) {
    return PrimeR(n, 2);
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
    return 0;
}
