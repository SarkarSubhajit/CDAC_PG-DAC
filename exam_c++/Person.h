#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
    string name;

    public:
        Person ();
        Person (const string& str);
        virtual ~Person ();

        void setName (const string& str);
        const string& getName() const;

        virtual void display();
};

#endif