#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, m4, m5;
    cout << "Enter Marks of 5 Subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    
    float percentage = (m1 + m2 + m3 + m4 + m5) / 5.0;
    cout << "Percentage: " << percentage << "%" << endl;
    
    cout << "Grade: ";
    if (percentage >= 90) cout << "A+";
    else if (percentage >= 80) cout << "A";
    else if (percentage >= 70) cout << "B";
    else if (percentage >= 60) cout << "C";
    else if (percentage >= 50) cout << "D";
    else cout << "F";
    cout << endl;
    
    if (percentage >= 50) cout << "Status: Pass" << endl;
    else cout << "Status: Fail" << endl;
    
    return 0;
}