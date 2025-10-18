#include "Person.h"
#include <iostream>
#include <cstring>
using namespace std;

int Person::count = 0;

Person::Person():addr() {
	name = nullptr;
	id = ++count;
}
Person::Person(const char* nm, const char* str, const char* ct, const char* stt, int pin) : addr(str, ct, stt, pin) {
	name = new char[strlen(nm) + 1];
	strcpy(name, nm);
	id = ++count;
}
Person::~Person() { delete[] name; }

// setter
void Person::setName(const char* nm) {
	delete[] name;
	name = new char[strlen(nm) + 1];
	strcpy(name, nm);
}
void Person::setAddr(Address a) {
	addr.setStreet(a.getStreet());
	addr.setCity(a.getCity());
	addr.setState(a.getState());
	addr.setPin(a.getPin());
}

// getters
const char* Person::getName() { return name; }
int Person::getId() { return id; }
Address& Person::getAddr() { return this->addr; }

void Person::display() {
	cout << "Name: " << name << "\t" << "ID: " << id << endl;
	//Address::display();
	addr.display();
}