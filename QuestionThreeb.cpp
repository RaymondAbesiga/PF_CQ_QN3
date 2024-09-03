#include <iostream>
using namespace std;

// Function to compute the Greatest Common Divisor (GCD) using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to reduce the fraction represented by num and denom
int reduce(int &num, int &denom) {
    // Check if either num or denom is zero or negative
    if (num <= 0 || denom <= 0) {
        return 0; // Failure to reduce
    }

    // Compute the GCD of num and denom
    int commonDivisor = gcd(num, denom);

    // Reduce num and denom by the GCD
    num /= commonDivisor;
    denom /= commonDivisor;

    return 1; // Success
}

int main() {
    int numerator, denominator;

    // Example usage
    cout << "Enter numerator (positive integer): ";
    cin >> numerator;
    cout << "Enter denominator (positive integer): ";
    cin >> denominator;

    // Call reduce and check the result
    int result = reduce(numerator, denominator);

    if (result == 1) {
        cout << "Reduced fraction: " << numerator << "/" << denominator << endl;
    } else {
        cout << "Error: Both numerator and denominator must be positive integers." << endl;
    }

    return 0;
}
