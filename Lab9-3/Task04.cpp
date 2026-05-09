#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("students.txt");

    if (!file) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    file << "Muqadas - 101\n";
    file << "Noor - 102\n";
    file << "Laiba - 103\n";

    file.close();

    ifstream readFile("students.txt");

    if (!readFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;

    cout << "Student Details:\n";

    while (getline(readFile, line)) {
        cout << line << endl;
    }

    readFile.close();

    return 0;
}