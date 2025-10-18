#pragma once
#include <string>
#include "Address.h"
using namespace std;

class Student {
    int roll;
    string name;
    Address addr;

public:
    Student();
    Student(int r, string n, string st, string ct, string stt, int pin);

    int getRoll() const;
    string getName() const;
    Address& getAddr();

    void display() const;
};