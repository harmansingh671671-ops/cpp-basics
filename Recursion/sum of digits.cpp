#include <iostream>
using namespace std;

int sum_of_digits(int n) {
    if (n < 10) {
        return n;
    }
    return (n % 10) + sum_of_digits(n / 10);
}

int main() {
    int n;
    cout << "Get the Sum of digits of: ";
    cin >> n;

    cout << "Sum: " << sum_of_digits(n) << endl;

    return 0;
}