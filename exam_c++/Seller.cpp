#include "Seller.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Seller::Seller(int id, const string& name) : Person(name) { this->id = id; }
Seller::~Seller() {}

void Seller::setId(int id) { this->id = id; }
int Seller::getId() { return id; }

void Seller::setProduct(const Product& product) { pr.push_back(product); }
const vector<Product>& Seller::getProduct() { return pr; }

void Seller::display() const {
    cout << "SELLER ID: " << id << "\tNAME: " << Person::getName() << endl;
    cout << "PRODUCTS=> " << endl;
    for (auto& products : pr)
        products.display();
}