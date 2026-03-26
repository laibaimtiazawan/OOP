#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    double salary;

public:
    void getEmployee() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display_employee() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Developer : public Employee {
private:
    string programming_language;

public:
    void getDeveloper() {
        getEmployee();
        cout << "Enter Programming Language: ";
        cin >> programming_language;
    }

    void display_developer() {
        cout << "Programming Language: " << programming_language << endl;
    }
};

class Designer : public Employee {
private:
    string design_tool;

public:
    void getDesigner() {
        getEmployee();
        cout << "Enter Design Tool: ";
        cin >> design_tool;
    }

    void display_designer() {
        cout << "Design Tool: " << design_tool << endl;
    }
};

int main() {
    Developer d;
    Designer ds;

    cout << "Enter Developer Information" << endl;
    d.getDeveloper();
    d.display_employee();
    d.display_developer();

    cout << endl;

    cout << "Enter Designer Information" << endl;
    ds.getDesigner();
    ds.display_employee();
    ds.display_designer();
}