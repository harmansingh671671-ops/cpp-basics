#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

int main() {
    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Factorial of a Number\n";
        cout << "2. Prime Number Check\n";
        cout << "3. Reverse and Palindrome Check\n";
        cout << "4. Armstrong Number Check\n";
        cout << "5. Perfect Number Check\n";
        cout << "6. GCD and LCM\n";
        cout << "7. Sum of Prime Numbers in a Range\n";
        cout << "8. Fibonacci Series\n";
        cout << "9. Strong Number Check\n";
        cout << "10. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int n;
            cin >> n;
            cout << "Factorial: " << factorial(n) << endl;
        } else if (choice == 2) {
            int n;
            cin >> n;
            if (isPrime(n)) cout << n << " is Prime" << endl;
            else cout << n << " is not Prime" << endl;
        } else if (choice == 3) {
            int n;
            cin >> n;
            int temp = n, rev = 0;
            while (temp > 0) {
                rev = rev * 10 + temp % 10;
                temp /= 10;
            }
            cout << "Reversed: " << rev << endl;
            if (rev == n) cout << "Palindrome" << endl;
            else cout << "Not Palindrome" << endl;
        } else if (choice == 4) {
            int n;
            cin >> n;
            int temp = n, digits = 0, sum = 0;
            while (temp > 0) {
                digits++;
                temp /= 10;
            }
            temp = n;
            while (temp > 0) {
                int d = temp % 10;
                sum += pow(d, digits);
                temp /= 10;
            }
            if (sum == n) cout << n << " is Armstrong" << endl;
            else cout << n << " is not Armstrong" << endl;
        } else if (choice == 5) {
            int n;
            cin >> n;
            int sum = 0;
            for (int i = 1; i < n; i++) {
                if (n % i == 0) sum += i;
            }
            if (sum == n) cout << n << " is Perfect" << endl;
            else cout << n << " is not Perfect" << endl;
        } else if (choice == 6) {
            int a, b;
            cin >> a >> b;
            int gcd = 1;
            for (int i = 1; i <= a && i <= b; i++) {
                if (a % i == 0 && b % i == 0) gcd = i;
            }
            int lcm = (a * b) / gcd;
            cout << "GCD: " << gcd << endl;
            cout << "LCM: " << lcm << endl;
        } else if (choice == 7) {
            int l, r;
            cin >> l >> r;
            int sum = 0, count = 0;
            for (int i = l; i <= r; i++) {
                if (isPrime(i)) {
                    sum += i;
                    count++;
                }
            }
            cout << "Count: " << count << endl;
            cout << "Sum: " << sum << endl;
        } else if (choice == 8) {
            int n;
            cin >> n;
            int a = 0, b = 1, sum = 0;
            cout << "Series: ";
            for (int i = 1; i <= n; i++) {
                cout << a << " ";
                sum += a;
                int next = a + b;
                a = b;
                b = next;
            }
            cout << "\nSum: " << sum << endl;
        } else if (choice == 9) {
            int n;
            cin >> n;
            int temp = n, sum = 0;
            while (temp > 0) {
                int d = temp % 10;
                sum += factorial(d);
                temp /= 10;
            }
            if (sum == n) cout << n << " is Strong" << endl;
            else cout << n << " is not Strong" << endl;
        }
    } while (choice != 10);

    return 0;
}