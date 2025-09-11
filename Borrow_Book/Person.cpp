#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person(const string& name, int age) : name(name), age(age) {}
Person::~Person() {}

// setters
void Person::setName(const string& name) { this->name = name; }
void Person::setAge(int age) { this->age = age; }

// getters
const string& Person::getName() {return name; }
int Person::getAge() { return age; }

void Person::display() { cout << "[Name: " << name << "\tAge: " << age << "]" << endl; }