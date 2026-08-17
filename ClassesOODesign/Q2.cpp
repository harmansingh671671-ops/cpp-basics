#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) {
        if (w <= 0 || h <= 0) {
            cout << "Error: Width and height must be strictly positive." << endl;
            width = 0.0;
            height = 0.0;
        } else {
            width = w;
            height = h;
        }
    }

    double area() const {
        return width * height;
    }

    double perimeter() const {
        return 2 * (width + height);
    }

    bool is_square() const {
        return width == height;
    }
};

int main() {
    Rectangle r1(5.0, 5.0);
    Rectangle r2(4.0, 10.0);

    cout << "r1 Area: " << r1.area() << ", Is Square: " << (r1.is_square() ? "True" : "False") << endl;
    cout << "r2 Area: " << r2.area() << ", Is Square: " << (r2.is_square() ? "True" : "False") << endl;
    return 0;
}