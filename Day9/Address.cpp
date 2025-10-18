#include <iostream>
#include "Address.h"
#include <cstring>
using namespace std;

Address::Address() {
	street = nullptr;
	city = nullptr;
	state = nullptr;
	pin = 0;
}
Address::Address(const char* str, const char* ct, const char* stt, int pin) {
	street = new char[strlen(str) + 1];
	strcpy(street, str);
	city = new char[strlen(ct) + 1];
	strcpy(city, ct);
	state = new char[strlen(stt) + 1];
	strcpy(state, stt);
	this->pin = pin;
}
Address::~Address() {
	delete[] street;
	delete[] city;
	delete[] state;
}

// setters
void Address::setStreet(const char* str) {
	if (street)
		delete[] street;
	street = new char[strlen(str) + 1];
	strcpy(street, str);
}
void Address::setCity(const char* ct) {
	if (city)
		delete[] city;
	city = new char[strlen(ct) + 1];
	strcpy(city, ct);
}
void Address::setState(const char* stt) {
	if (state)
		delete[] state;
	state = new char[strlen(stt) + 1];
	strcpy(state, stt);
}
void Address::setPin(int pin) {
	this->pin = pin;
}

// getters
const char* Address::getStreet() { return street; }
const char* Address::getCity() { return city; }
const char* Address::getState() { return state; }
int Address::getPin() { return pin; }

void Address::display() {
	cout << "Address is ......" << endl;
	cout << "Street: " << street << endl;
	cout << "City: " << city << endl;
	cout << "State: " << state << endl;
	cout << "PIN: " << pin << endl;
}