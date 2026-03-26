#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void getPersonData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void display_person_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int student_id;

public:
    void getStudentData() {
        getPersonData();
        cout << "Enter Student ID: ";
        cin >> student_id;
    }

    void display_student_info() {
        cout << "Student ID: " << student_id << endl;
    }
};

int main() {
    Student s;
    s.getStudentData();
    s.display_person_info();
    s.display_student_info();
}