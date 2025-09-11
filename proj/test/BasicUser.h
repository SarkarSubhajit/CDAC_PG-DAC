#include "User.h"
#include <string>
#include <vector>
using namespace std;

class BasicUser : public User {
    public:
        BasicUser(double usage);
        ~BasicUser();

        double calcBill() override;
        string getBill(const string& str) override;
        void display(const string& str) override;
};