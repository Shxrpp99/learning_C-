#include <iostream>
using namespace std;

int main() {
    int age;
    string firstName;
    string lastName;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "\nYour name is: " << firstName << " " << lastName << endl;
    cout << "Your age is: " << age << endl;

    return 0;
}