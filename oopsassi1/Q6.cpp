#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e, f, g, h;
    cout << "Enter values for a, b, c, d, e, f, g, h: ";
    cin >> a >> b >> c >> d >> e >> f >> g >> h;

    bool result = (a + b * c) > d && (e != f || g <= h);

    cout << boolalpha << "Result: " << result << "\n";
    return 0;
}