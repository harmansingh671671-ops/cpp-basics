#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string name, branch;
    int rollNo;
    float m1, m2, m3, m4, m5;

    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    cout << "Enter Branch: ";
    getline(cin, branch);
    cout << "Enter marks in 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    float total = m1 + m2 + m3 + m4 + m5;
    float average = total / 5;
    float percentage = (total / 500) * 100;
    float highest = max({m1, m2, m3, m4, m5});
    float lowest = min({m1, m2, m3, m4, m5});

    cout << "Name: " << name << "\nRoll No: " << rollNo << "\nBranch: " << branch << "\n";
    cout << "Total Marks: " << total << "/500\n";
    cout << "Average Marks: " << average << "\n";
    cout << "Percentage: " << percentage << "%\n";
    cout << "Highest Marks: " << highest << "\n";
    cout << "Lowest Marks: " << lowest << "\n";

    return 0;
}