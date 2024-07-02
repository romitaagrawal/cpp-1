#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct StudentForm {
    int id;
    string name;
    char grade;
};

const int student_count = 3;
StudentForm students[student_count];

int main() {
    cout << "---------+++++++++++------------\n";
    cout << "\t\tStudent Form\n";

    for (size_t i = 0; i < student_count; ++i) {
        cout << "\nEnter Id: ";
        cin >> students[i].id;

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
        cout << "\nEnter Name: ";
        getline(cin, students[i].name);

        cout << "\nEnter Grade: ";
        cin >> students[i].grade;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
    }

    cout << "\tSaved Student Details\n";

    for (size_t i = 0; i < student_count; ++i) {
        cout << i + 1 << "\n\n";
        cout << "Id: " << students[i].id << "\n";
        cout << "Name: " << students[i].name << "\n";
        cout << "Grade: " << students[i].grade << "\n\n\n\n";
    }

    return 0;
}

