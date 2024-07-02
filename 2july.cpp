#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

void Calc();

int main() {
    Calc();
    return 0;
}

void Calc() {
    int v1, v2;
    char op;
    system("cls");

    cout << "Enter an Arithmetic Operation\n ";
    cin >> v1 >> op >> v2;

    switch(op) {
        case '+':
            cout << v1 << " " << op << " " << v2 << " = " << v1 + v2 << endl;
            break;
        case '-':
            cout << v1 << " " << op << " " << v2 << " = " << v1 - v2 << endl;
            break;
        case '*':
            cout << v1 << " " << op << " " << v2 << " = " << v1 * v2 << endl;
            break;
    }
}
