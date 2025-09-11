#include "PersonService.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<Player> PersonService::players;
vector<Sports> PersonService::sport;

void PersonService::addPlayer() {
    string name;
    int age, id;
    long long mobile;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Mobile No.: ";
    cin >> mobile;

    Player p(name, age, id, mobile);
    players.push_back(p);
}

void PersonService::addSports() {
    string name;
    int fees;
    cout << "Enter Sports Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Fees: ";
    cin >> fees;

    Sports s(name, fees);
    sport.push_back(s);
}
void PersonService::enrollPlayer() {
    int pid;
    string name;

    cout << "Enter Player ID: ";
    cin >> pid;
    cout << "Enter Sports to Enroll: ";
    cin.ignore();
    getline(cin, name);

    for (auto& p : players) {
        if (p.getId() == pid) {
            for (auto& s : sport) {
                if (s.getSpname() == name) {
                    p.setSports(s);
                }
            }
        }
    }
}

void PersonService::displaySports(const string& str) {
    for (auto& p : players) {
        if (p.getName() == str) {
            for (auto& s : p.getSports()) {
                s.display();
            }
        }
    }
}
void PersonService::displayAll() {
    for (auto& i : players)
        i.display();
}
void PersonService::displayPlayers(const string& str) {
    for (auto& p : players)
        for (auto& s : p.getSports()) {
            if (s.getSpname() == str) {
                cout << "Payer ID: " << p.getId() << "Name: " << p.getName() << endl;
                cout << "Age: " << p.getAge() << "Mobile: " << p.getMobile() << endl;
            }
        }
}