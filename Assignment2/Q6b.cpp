#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int val = 0;

    cout << "Continuous Sum Calculator" << endl;
    while (val >= 0) {
        cout << "Enter an integer: ";
        cin >> val;

        if (val < 0) {
            break;
        }
        if (val == 0) {
            continue;
        }
        sum += val;
    }

    cout << "Final Sum: " << sum << endl;
    return 0;
}