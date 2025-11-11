#include <iostream>
using namespace std;

// ----------------------------
// Procedural Programming (POP)
float calculateAreaPOP(float l, float w) {
    return l * w;
}

// ----------------------------
// Object-Oriented Programming (OOP)
class Rectangle {
private:
    float l;
    float w;

public:
    void getData() {
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;
    }

    float calculateArea() {
        return l * w;
    }
};

int main() {
    cout << "===== Procedural Programming (POP) =====" << endl;
    float l1, w1;
    cout << "Enter length: ";
    cin >> l1;
    cout << "Enter width: ";
    cin >> w1;

    float areaPOP = calculateAreaPOP(l1, w1);
    cout << "Area (POP) = " << areaPOP << endl;

    cout << "\n===== Object-Oriented Programming (OOP) =====" << endl;
    Rectangle rect;
    rect.getData();
    cout << "Area (OOP) = " << rect.calculateArea() << endl;

    return 0;
}

