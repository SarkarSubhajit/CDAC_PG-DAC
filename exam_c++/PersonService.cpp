#include "PersonService.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

vector<Seller> PersonService::slr;

void PersonService::addSeller() {
    string name;
    int id;
    cout << "Enter Seller ID : ";
    cin >> id;
    cout << "Enter Seller Name : ";
    cin.ignore();
    getline(cin, name);
    
    Seller s(id, name);
    slr.push_back(s);
}
void PersonService::addProduct(int id) {
    for (auto& seller : slr)
        if (seller.getId() == id) {
            int pid;
            string pname;
            double price;
            cout << "Enter Product ID: ";
            cin >> pid;
            cout << "Enter Product Name: ";
            cin.ignore();
            getline(cin, pname);
            cout << "Enter Product Price: ";
            cin >> price;

            Product p(pid, pname, price);
            seller.setProduct(p);
        }
}
void PersonService::displayAll() {
    for (auto& seller : slr) {
        seller.display();
        cout << "_______________" << endl;
    }
}
void PersonService::displaySeller() {
    for (auto& seller : slr) {
        cout << "[SELLER ID: " << seller.getId() << "\tSELLER NAME: " << seller.getName() << "]" << endl;
    }
}
void PersonService::displayProduct() {
    for (auto& seller : slr) {
        for (auto& product : seller.getProduct())
            product.display();
    }
}

void PersonService::saveData(ofstream& file) {
    for (auto& seller : slr) {
        file << slr;
    }
}