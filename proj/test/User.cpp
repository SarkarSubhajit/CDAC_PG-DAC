#include "User.h"
#include <iostream>
#include <string>
using namespace std;

User::User(double u) : usage(u) {}
User::~User() {}

void User::setUsage(double u) { usage = u; }
double User::getUsage() { return usage; }

void User::display(const string& str) { cout << "Usage: " << usage << endl; }