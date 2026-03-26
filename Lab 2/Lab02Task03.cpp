#include <iostream>
using namespace std;

class Voter {
private:
    string name;
    int age;

public:
    void getData();
    bool isEligible();
};

void Voter::getData() {
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
}

bool Voter::isEligible() {
    if (age > 18)
        return true;
    else
        return false;
}

int main() {
    Voter v1;

    v1.getData();

    if (v1.isEligible())
        cout << "Eligible for voting" << endl;
    else
        cout << "Not eligible for voting" << endl;

    return 0;
}