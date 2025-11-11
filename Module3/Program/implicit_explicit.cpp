#include <iostream>
using namespace std;

int main() {
    // Implicit Type Conversion (done automatically by the compiler)
    
    int a = 5;
    float b = 2.5;
    float result1 = a + b;   

    cout << "--- Implicit Type Conversion ---" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Result (a + b) = " << result1 << endl;

    // - Explicit Type Conversion (done manually by the programmer)

    double x = 7.8;
    int y = (int)x;   

    cout << "\n--- Explicit Type Conversion ---" << endl;
    cout << "x = " << x << endl;
    cout << "After converting to int, y = " << y << endl;

    int p = 5, q = 2;
    float result2 = (float)p / q;   
    cout << "Division result (float) = " << result2 << endl;

    return 0;
}

