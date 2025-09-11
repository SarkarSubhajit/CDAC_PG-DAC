#include "Player.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Player::Player(const string& nm, int ag, int id, long long mobile) : Person(nm, ag) {
    this->id = id;
    this->mobile = mobile;
}
Player::~Player() {}

// setters
void Player::setId(int id) { this->id = id; }
void Player::setMobile(long long mb) { this->mobile = mobile; }
void Player::setSports(const Sports& sport) { sports.push_back(sport); }

// getters
int Player::getId() const { return id; }
long long Player::getMobile() const { return mobile; }
const vector<Sports>& Player::getSports() const { return sports; }

void Player::display() {
    Person::display();
    cout << "Player ID: " << id << "\tMobile: " << mobile << endl;
    for (auto& i : sports)
        i.display();
}