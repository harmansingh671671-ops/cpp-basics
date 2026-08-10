#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string s) {
    if (s.length() <= 1) {
        return true;
    }

    if (s.front() == s.back()) {
        return is_palindrome(s.substr(1, s.length() - 2));
    } else {
        return false;
    }
}

int main() {
    string input;
    cout << "Enter a word: ";
    cin >> input;

    if (is_palindrome(input)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}