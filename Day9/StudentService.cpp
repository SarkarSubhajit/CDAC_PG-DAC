#include "StudentService.h"
#include <iostream>
using namespace std;

map<int, Student> StudentService::students;

void StudentService::addStudent() {
    int roll, pin;
    string name, street, city, state;

    cout << "Enter Roll: ";
    cin >> roll;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Street: ";
    getline(cin, street);
    cout << "Enter City: ";
    getline(cin, city);
    cout << "Enter State: ";
    getline(cin, state);
    cout << "Enter Pin: ";
    cin >> pin;

    students[roll] = Student(roll, name, street, city, state, pin);
}

void StudentService::displayAll() {
    for (auto& [r, s] : students) {
        s.display();
        cout << "-------------------" << endl;
    }
}

void StudentService::searchByRoll(int roll) {
    auto it = students.find(roll);
    if (it != students.end())
        it->second.display();
    else
        cout << "Student not found!\n";
}

void StudentService::displayByCity(const string& city) {
    bool found = false;
    for (auto& [r, s] : students) {
        if (city == s.getAddr().getCity()) {
            s.display();
            found = true;
        }
    }
    if (!found) cout << "No student found in this city!\n";
}