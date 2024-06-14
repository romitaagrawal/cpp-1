#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string filename;
    cout << "Enter the name of the file you want to open: ";
    getline(cin, filename);
    ifstream infile(filename);
    if (!infile) {
        cout << "File does not exist. Do you want to create the file? (yes/no): ";
        string response;
        getline(cin, response);

        if (response == "yes") {
            ofstream outfile(filename);
            if (outfile) {
                cout << "File created successfully." << endl;
            } else {
                cout << "Failed to create the file." << endl;
            }
        } else {
            cout << "File not created." << endl;
        }
    } else {
        cout << "File opened successfully." << endl;
    }
    return 0;
}
