#include "Person.h"
#include "Sports.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player : public Person {
    int id;
    long long mobile;
    vector<Sports> sports;

    public:
        Player();
        Player(const string& nm, int ag, int id, long long mobile);
        ~Player();

        // setters
        void setId(int id);
        void setMobile(long long mb);
        void setSports(const Sports& sport);

        // getters
        int getId() const;
        long long getMobile() const;
        const vector<Sports>& getSports() const;

        void display();
};