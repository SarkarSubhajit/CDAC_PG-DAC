/*
Person

string name

int age

virtual void display()
*/

#pragma once

#include <string>
using namespace std;

class Person {
    string name;
    int age;

    public:
        Person(const string& name, int age);
        virtual ~Person();

        // setters
        void setName(const string& name);
        void setAge(int age);

        // getters
        const string& getName();
        int getAge();

        virtual void display();
};