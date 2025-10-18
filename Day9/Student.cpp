#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() : roll(0), name(""), addr() {}

Student::Student(int r, string n, string st, string ct, string stt, int pin)
    : roll(r), name(n), addr(st.c_str(), ct.c_str(), stt.c_str(), pin) {}

int Student::getRoll() const { return roll; }
string Student::getName() const { return name; }
Address& Student::getAddr() { return addr; }

void Student::display() const {
    cout << "Roll: " << roll << "  Name: " << name << endl;
    const_cast<Address&>(addr).display();
}