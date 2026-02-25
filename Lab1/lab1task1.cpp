#include <iostream>
using namespace std;

// Structure Declaration
struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    // Member Function
    void displayStudentInfo() {
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Structure Variable
    Student s1;

    // Assigning values to data members
    s1.firstName = "Laiba";
    s1.lastName = "Awan";
    s1.rollNumber = 2025;
    s1.marks = 90.5;

    // Calling member function
    s1.displayStudentInfo();

    return 0;
}