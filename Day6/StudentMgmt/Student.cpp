#include <iostream>
#include <cstring>
using namespace std;
#include "Student.h"

// initialize static variable
int Student::passpercent = 40;

// default constructor
Student::Student() {
    id = 0;
    name = nullptr;
    addr = nullptr;
    m1 = 0;
    m2 = 0;
    m3 = 0;
}

// parametrised constructor
Student::Student(int id, const char *nm, const char *addr, int m1, int m2, int m3) {
    this->id = id;
    name = new char[strlen(nm) + 1];
    strcpy(this->name, nm);
    this->addr = new char[strlen(addr) + 1];
    strcpy(this->addr, addr);
    this->m1 = m1;
    this->m2 = m2;
    this->m3 = m3;
}

Student::~Student()
{
    if (name)
        delete[] name;
    if (addr)
        delete[] addr;
}
// setter methods
void Student::setId(int id) {
    this->id = id;
}
void Student::setName(const char *nm) {
    delete[] name;
    name = new char[strlen(nm) + 1];
    strcpy(name, nm);
}
void Student::setAddr(const char *addr) {
    delete[] this->addr;
    this->addr = new char[strlen(addr) + 1];
    strcpy(this->addr, addr);
}
void Student::setM1(int m1) {
    this->m1 = m1;
}
void Student::setM2(int m2) {
    this->m2 = m2;
}
void Student::setM3(int m3) {
    this->m3 = m3;
}
// getter methods
int Student::getId() { return this->id; }
const char* Student::getName() { return name; }
const char* Student::getAddr() { return addr; }
int Student::getM1() { return this->m1; }
int Student::getM2() { return this->m2; }
int Student::getM3() { return this->m3; }
int Student::getPassPercent() { return passpercent;}

void Student::display()
{
    cout << "StudentID : " << this->id << " Name: " << (name ? name : " Not found") << endl;
    cout << " Address: " << addr << endl;
    cout << " M1 : " << this->m1 << " M2 : " << this->m2 << " M3 : " << this->m3 << endl;
}