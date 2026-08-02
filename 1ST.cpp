# include <iostream>
using namespace std;
int a, b, c;
int main() {
    cout << "Enter three Numbers with spaces: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c) {
        cout << a << " is the largest number\n";
    } else if (b >= a && b >= c) {
        cout << b << " is the largest number\n";
    } else {
        cout << c << " is the largest number\n";
    }
    return 0;
}