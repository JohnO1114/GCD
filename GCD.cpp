#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    cout << "This program calculates the greatest common divisor (GCD) for two integers.\n" << endl;

    int num1, num2;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another: ";
    cin >> num2;

    int result = gcd(num1, num2);

    cout << "\nGCD = " << result << endl;

    return 0;
}
