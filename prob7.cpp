#include <iostream>
using namespace std;

bool powertwo(int n) {
    if (n == 1)
        return true;   
    if (n == 0 || n % 2 != 0)
        return false;  

    return powertwo(n / 2);
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (powertwo(num))
        cout << num << " is a power of 2." << endl;
    else
        cout << num << " is not a power of 2." << endl;
    return 0;
}
