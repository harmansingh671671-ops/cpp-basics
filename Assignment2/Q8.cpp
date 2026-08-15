#include <iostream>
using namespace std;

int main() {
    int choice;
    do {
        cout << "\n================ MENU ================\n";
        cout << "1. Palindromic Number Pyramid (N=5)\n";
        cout << "2. Alphabetic Palindromic Pyramid (N=5)\n";
        cout << "3. Hollow Number Pyramid (N=6)\n";
        cout << "4. Inverted Number Pyramid (N=5)\n";
        cout << "5. Diamond Number Pattern (N=4)\n";
        cout << "6. Hollow Diamond Pattern (N=5)\n";
        cout << "7. Exit\n";
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        if (choice == 1) {
            int n = 5;
            cout << "\n--- Palindromic Number Pyramid ---\n";
            for (int i = 1; i <= n; i++) {
                for (int s = 0; s < n - i; s++) cout << " ";
                for (int j = i; j >= 1; j--) cout << j;
                for (int j = 2; j <= i; j++) cout << j;
                cout << endl;
            }
        } else if (choice == 2) {
            int n = 5;
            cout << "\n--- Alphabetic Palindromic Pyramid ---\n";
            for (int i = 1; i <= n; i++) {
                for (int s = 0; s < n - i; s++) cout << " ";
                for (int j = i; j >= 1; j--) cout << (char)('A' + j - 1);
                for (int j = 2; j <= i; j++) cout << (char)('A' + j - 1);
                cout << endl;
            }
        } else if (choice == 3) {
            int n = 6;
            cout << "\n--- Hollow Number Pyramid ---\n";
            for (int i = 1; i <= n; i++) {
                for (int s = 0; s < n - i; s++) cout << " ";
                if (i == 1) {
                    cout << "1";
                } else if (i == n) {
                    for (int j = 0; j < 2 * n - 1; j++) cout << "1";
                } else {
                    cout << "1";
                    for (int s = 0; s < 2 * i - 3; s++) cout << " ";
                    cout << "1";
                }
                cout << endl;
            }
        } else if (choice == 4) {
            int n = 5;
            cout << "\n--- Inverted Number Pyramid ---\n";
            for (int i = 1; i <= n; i++) {
                for (int j = i; j <= n; j++) cout << j;
                cout << endl;
            }
        } else if (choice == 5) {
            int n = 4;
            cout << "\n--- Diamond Number Pattern ---\n";
            for (int i = 1; i <= n; i++) {
                for (int s = 0; s < n - i; s++) cout << " ";
                for (int j = i; j >= 1; j--) cout << j;
                for (int j = 2; j <= i; j++) cout << j;
                cout << endl;
            }
            for (int i = n - 1; i >= 1; i--) {
                for (int s = 0; s < n - i; s++) cout << " ";
                for (int j = i; j >= 1; j--) cout << j;
                for (int j = 2; j <= i; j++) cout << j;
                cout << endl;
            }
        } else if (choice == 6) {
            int n = 5;
            cout << "\n--- Hollow Diamond Pattern ---\n";
            for (int i = 1; i <= n; i++) {
                for (int s = 0; s < n - i; s++) cout << " ";
                if (i == 1) {
                    cout << "*";
                } else {
                    cout << "*";
                    for (int s = 0; s < 2 * i - 3; s++) cout << " ";
                    cout << "*";
                }
                cout << endl;
            }
            for (int i = n - 1; i >= 1; i--) {
                for (int s = 0; s < n - i; s++) cout << " ";
                if (i == 1) {
                    cout << "*";
                } else {
                    cout << "*";
                    for (int s = 0; s < 2 * i - 3; s++) cout << " ";
                    cout << "*";
                }
                cout << endl;
            }
        } else if (choice == 7) {
            cout << "Exiting program.\n";
        } else {
            cout << "Invalid choice! Please select an option between 1 and 7.\n";
        }
    } while (choice != 7);

    return 0;
}