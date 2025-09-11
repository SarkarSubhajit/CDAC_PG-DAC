#include "Sports.h"
#include "Player.h"
#include <string>
#include <vector>
using namespace std;

class PersonService {
    static vector<Player> players;
    static vector<Sports> sport;

    public:
        static void addPlayer();
        static void addSports();
        static void enrollPlayer();
        static void displaySports(const string& str);
        static void displayAll();
        static void displayPlayers(const string& str);
};