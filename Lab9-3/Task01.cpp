#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("notes.txt");

    if (!file) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    file << "Hello, this is line 1\n";
    file << "This is line 2\n";
    file << "This is line 3\n";

    file.close();

    ifstream readFile("notes.txt");

    if (!readFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;
    cout << "File Content:\n";

    while (getline(readFile, line)) {
        cout << line << endl;
    }

    readFile.close();

    ofstream appendFile("notes.txt", ios::app);

    if (!appendFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    appendFile << "Name: Your Name Here\n";
    appendFile << "Roll No: 12345\n";

    appendFile.close();

    cout << "Data appended successfully!" << endl;

    return 0;
}