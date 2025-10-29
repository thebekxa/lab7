#include <iostream>
using namespace std;
int product(int n) {
   
    if (n < 0)
        n = -n;
    if (n == 0)
        return 1;
    return (n % 10) * product(n / 10);
}

int main() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Product of digits of " << num << " = " << product(num) << endl;
    return 0;
}
