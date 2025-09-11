#include "User.h"
#include <string>
#include <vector>
using namespace std;

template <typename T>
bool checkCoupon (const string& coupon, const string& valid) {
    return (coupon == valid);
}

class PremiumUser : public User {
    string coupon;
    public:
        PremiumUser();
        PremiumUser(double usage, const string& coupon);
        ~PremiumUser();

        double calcBill() override;
        string getBill(const string& str) override;
        void display(const string& str) override;
};