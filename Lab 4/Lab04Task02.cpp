#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void getPerson() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void display_person() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
protected:
    int employee_id;

public:
    void getEmployee() {
        getPerson();
        cout << "Enter Employee ID: ";
        cin >> employee_id;
    }

    void display_employee() {
        cout << "Employee ID: " << employee_id << endl;
    }
};

class Manager : public Employee {
private:
    string department;

public:
    void getManager() {
        getEmployee();
        cout << "Enter Department: ";
        cin >> department;
    }

    void display_manager() {
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;
    m.getManager();
    m.display_person();
    m.display_employee();
    m.display_manager();
}