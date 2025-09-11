#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person(const string& str) : name(str) {}
Person::~Person() {}

void Person::setName(const string& str) { name = str; }
const string& Person::getName() const { return name; }

void Person::display() { cout << "NAME: " << name << endl; }