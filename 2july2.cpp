#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main() {
    char username1[50];
    char password1[10];
    char username[50] = "romita";
    char password[10] = "rrrr";

    system("cls");

    cout << "\n\n\n\t\t\tUsername: ";
    cin >> username1;
    cout << "\t\t-------------\n";
    cout << "\t\t\tPassword: ";
    cin >> password1;
    cout << "\t\t-----------------------------------------------\n";

    system("cls");
    if (strcmp(username1, username) == 0) {
        if (strcmp(password1, password) == 0) {
            cout << "\t\t\tSuccessfully logged in." << endl;
        } else {
            cout << "\t\t\tIncorrect password. Please enter correct password." << endl;
        }
    } else {
        cout << "\t\t\tIncorrect Username. Please enter correct username." << endl;
    }

    return 0;
}
