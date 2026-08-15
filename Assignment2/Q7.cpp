#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 0;
    
    cout << "Finding the first 5 prime numbers greater than 100:" << endl;

    for (int i = 101; ; i++) {
        if (!isPrime(i)) {
            continue;
        }
        cout << "Prime " << (count + 1) << ": " << i << endl;
        count++;
        if (count == 5) {
            break;
        }
    }

    return 0;
}