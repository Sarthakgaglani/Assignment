#include <iostream>
using namespace std;
int globalVar = 10;
void display() {
    int localVar = 20;  
    cout << "Inside display() function:" << endl;
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;
}

int main() {
    int localVar = 5;  
    cout << "Inside main() function:" << endl;
    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;

    cout << "\nCalling display() function\n";
    display();

    cout << "\nBack in main() function:" << endl;
    cout << "Global variable (still accessible): " << globalVar << endl;

    return 0;
}

