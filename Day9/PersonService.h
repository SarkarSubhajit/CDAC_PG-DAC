/*
create Array of pointers to store Person objects
and write code for following
	1. Add new Person
        2. Display All Person
        3. Search by Id
        5. Search by Name
        6. Modify address;
	7. find address by id of Person
	8. display all Person stay in given city------>(accept city from user)
        9. Exit
*/

#pragma once
#include "Person.h"
#include <vector>
#include <string>
using namespace std;

class PersonService {
    static vector<Person*> persons;

public:
    static void addPerson();
    static void displayAll();
    static Person* searchById(int id);
    static Person* searchByName(const string& name);
    static void modifyAddress(int id);
    static void findAddrById(int id);
    static void findByCity(const string& city);
    static void cleanup(); // free memory
};