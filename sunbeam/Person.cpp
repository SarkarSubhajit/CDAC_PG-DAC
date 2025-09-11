#include "Person.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Person::Person(const string& nm, int ag) : name(nm), age(ag) {}
Person::~Person() {}

// setters
void Person::setName(const string& nm) { name = nm; }
void Person::setAge(int ag) { age = ag; }

// getters
const string& Person::getName() const { return name; }
int Person::getAge() const { return age; }

void Person::display() {
    cout << "Name: " << name << "\tAge: " << age << endl;
}