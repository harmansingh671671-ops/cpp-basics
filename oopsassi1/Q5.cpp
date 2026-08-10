#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers with a space: ";
    cin >> num1 >> num2;

    if (num2 == 0) {
        cout << "Division by zero is not allowed.\n";
        return 0;
    }

    float result = static_cast<float>(num1) / num2;

    cout << "Result of " << num1 << " / " << num2 << " = " << result << "\n";
    return 0;
}