#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
using namespace std;

class Person {
    string name;
    int age;

    public:
        Person();
        Person(const string& nm, int ag);
        virtual ~Person();

        // setters
        void setName(const string& nm);
        void setAge(int ag);

        // getters
        const string& getName() const;
        int getAge() const;

        virtual void display();
};

#endif