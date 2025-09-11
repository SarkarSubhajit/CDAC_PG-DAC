#include "Books.h"
#include <string>
#include <iostream>
using namespace std;

Book::Book(int bookid, const string& title, const string& author, bool av) : bookid(bookid), title(title), author(author), available(av) {}
Book::~Book() {}

// setters
void Book::setBookid(int bookid) { this->bookid = bookid; }
void Book::setTitle(const string& title) { this->title = title; }
void Book::setAuthor(const string& author) { this->author = author; }
void Book::setAvailable(bool av) { available = av; }

// getters
int Book::getBookId() { return bookid; }
const string& Book::getTitle() { return title; }
const string& Book::getAuthor() { return author; }
bool Book::isAvailable() { return available; }

void Book::markBorrowed() { available = false; }
void Book::markReturned() { available = true; }
void Book::display() {
    cout << "BookID: " << bookid << "\tTitle: " << title << endl;
    cout << "Author: " << author << "\tStatus: " << (available ? "Available" : "Not Available") << endl;
}