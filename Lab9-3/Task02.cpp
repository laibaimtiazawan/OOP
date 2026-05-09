#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("notes.txt");

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;
    int count = 0;

    while (getline(file, line)) {
        count++;
    }

    file.close();

    cout << "Total number of lines: " << count << endl;

    return 0;
}