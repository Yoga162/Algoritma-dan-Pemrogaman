#include <iostream>

using namespace std;

int main() {

int num;

cout << "Enter a number: ";

cin >> num;

switch (num) {
    case '1': //kurang tanda petik 1
        cout << "One" << endl;
        break;
    case '2': //kurang tanda petik 1
        cout << "Two" << endl;
        break;
    default:
        cout << "Other number" << endl; }
return 0; }
