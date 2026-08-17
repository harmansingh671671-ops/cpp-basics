#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    string student_id;
    string name;
    vector<double> grades;

public:
    Student(string id, string student_name) {
        student_id = id;
        name = student_name;
    }

    void add_grade(string subject, double score) {
        if (score >= 0 && score <= 100) {
            grades.push_back(score);
        } else {
            cout << "Error: Score must be between 0 and 100." << endl;
        }
    }

    double calculate_average() const {
        if (grades.empty()) {
            return 0.0;
        }
        double sum = 0.0;
        for (double score : grades) {
            sum += score;
        }
        return sum / grades.size();
    }

    char get_letter_grade() const {
        double avg = calculate_average();
        if (avg >= 90) return 'A';
        if (avg >= 80) return 'B';
        if (avg >= 70) return 'C';
        if (avg >= 60) return 'D';
        return 'F';
    }
};

int main() {
    Student s("S101", "Bob");
    s.add_grade("Math", 95);
    s.add_grade("CS", 85);

    cout << "Average: " << s.calculate_average() 
         << " | Letter Grade: " << s.get_letter_grade() << endl;
    return 0;
}