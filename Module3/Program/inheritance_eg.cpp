#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void showDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
public:
    string course;

    void getCourse() {
        cout << "Enter course: ";
        cin >> course;
    }

    void showCourse() {
        cout << "Student Course: " << course << endl;
    }
};

class Teacher : public Person {
public:
    string subject;

    void getSubject() {
        cout << "Enter subject taught: ";
        cin >> subject;
    }

    void showSubject() {
        cout << "Teacher Subject: " << subject << endl;
    }
};

int main() {
    cout << "--- Student Details ---" << endl;
    Student s;
    s.getDetails();
    s.getCourse();
    s.showDetails();
    s.showCourse();

    cout << "\n--- Teacher Details ---" << endl;
    Teacher t;
    t.getDetails();
    t.getSubject();
    t.showDetails();
    t.showSubject();

    return 0;
}

