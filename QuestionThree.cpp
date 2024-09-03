#include <iostream>
using namespace std;
int sum_from_to(int first, int last) {
    int sum = 0;
    for (int i = first; i <= last; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int c, f;
    cout << "Enter the first integer: ";
    cin >> c;
    cout << "Enter the last integer: ";
    cin >> f;
    cout << "Sum of integers from " << c << " to " << f << ": " << sum_from_to(c, f);

    return 0;
}
