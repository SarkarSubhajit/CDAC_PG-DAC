#include "PersonService.h"
#include <iostream>
#include <cstring>
using namespace std;

vector<Person*> PersonService::persons;

void PersonService::addPerson() {
    string name, street, city, state;
    int pin;

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

    persons.push_back(new Person(name.c_str(), street.c_str(), city.c_str(), state.c_str(), pin));
}

void PersonService::displayAll() {
    for (auto p : persons) {
        p->display();
        cout << "-------------------" << endl;
    }
}

Person* PersonService::searchById(int id) {
    for (auto p : persons)
        if (p->getId() == id) return p;
    return nullptr;
}

Person* PersonService::searchByName(const string& name) {
    for (auto p : persons)
        if (strcmp(p->getName(), name.c_str()) == 0) return p;
    return nullptr;
}

void PersonService::modifyAddress(int id) {
    Person* p = searchById(id);
    if (!p) {
        cout << "Person not found!\n";
        return;
    }

    string street, city, state;
    int pin;
    cout << "Enter new Street: ";
    cin.ignore();
    getline(cin, street);
    cout << "Enter new City: ";
    getline(cin, city);
    cout << "Enter new State: ";
    getline(cin, state);
    cout << "Enter new Pin: ";
    cin >> pin;

    Address a(street.c_str(), city.c_str(), state.c_str(), pin);
    p->setAddr(a);
}

void PersonService::findAddrById(int id) {
    Person* p = searchById(id);
    if (p) {
        p->getAddr().display();
    } else {
        cout << "Person not found!\n";
    }
}

void PersonService::findByCity(const string& city) {
    bool found = false;
    for (auto p : persons) {
        if (strcmp(p->getAddr().getCity(), city.c_str()) == 0) {
            p->display();
            found = true;
        }
    }
    if (!found) cout << "No person found in this city!\n";
}

void PersonService::cleanup() {
    for (auto p : persons) delete p;
    persons.clear();
}