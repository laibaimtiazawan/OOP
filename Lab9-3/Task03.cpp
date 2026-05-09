#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("notes.txt");

    if (!inFile) {
        cout << "Error opening source file!" << endl;
        return 1;
    }

    ofstream outFile("copy.txt");

    if (!outFile) {
        cout << "Error creating destination file!" << endl;
        return 1;
    }

    string line;

    while (getline(inFile, line)) {
        outFile << line << endl;
    }

    inFile.close();
    outFile.close();

    cout << "File copied successfully!" << endl;

    return 0;
}