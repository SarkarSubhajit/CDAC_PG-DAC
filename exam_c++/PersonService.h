#include "Seller.h"
#include "Product.h"
#include <string>
#include <vector>
using namespace std;

class PersonService {
    static vector<Seller> slr;

    public:
        static void addSeller();
        static void addProduct(int id);
        static void displayAll();
        static void displaySeller();
        static void displayProduct();
        static void saveData();
        static void loadData();
};