#include "Members.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

Member::Member(const string& name, int age, int memberId, const string& email) : Person(name, age) {
    this->memberId = memberId;
    this->email = email;
}
Member::~Member() {}

// setters
void Member::setMemberId(int memberId) { this->memberId = memberId; }
void Member::setEmail(const string& email) { this->email = email; }
//void Member::setBorrowedBooks(const Book& book) { borrowedBooks.push_back(book); }

// setters
int Member::getMemberId() { return memberId; }
const string& Member::getEmail() { return email; }
vector<Book>& Member::getBorrowedBooks() { return borrowedBooks; }

void Member::borrowBook(const Book& book) { borrowedBooks.push_back(book); }
void Member::returnBook(int bookId) {
    for (auto it = borrowedBooks.begin(); it != borrowedBooks.end(); it++) {
        if (it->getBookId() == bookId) {
            borrowedBooks.erase(it);
            break;
        }
    }
}
void Member::display() {
    Person::display();
    cout << "[MemberID: " << memberId << "\tEmail: " << email << "]" << endl;
    for (auto& b : borrowedBooks)
        b.display();
}