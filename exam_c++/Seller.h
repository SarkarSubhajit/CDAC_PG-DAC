#include "Person.h"
#include "Product.h"
#include <vector>
#include <string>
using namespace std;

class Seller : public Person {
    int id;
    vector<Product> pr;

    public:
        Seller();
        Seller(int id, const string& name);
        virtual ~Seller();

        void setId(int id);
        void setProduct(const Product& pr);

        //getters
        int getId();
        const vector<Product>& getProduct();

        virtual void display() const;
};