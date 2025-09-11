#include "Members.h"
#include "Books.h"
#include <vector>
#include <string>
using namespace std;

class LibraryService {
    static vector<Member> members;
    static vector<Book> books;

    public:
        static void addMember();
        static void addBook();
        static void borrowBooks(int memberId, int bookid);
        static void returnBooks(int memberId, int bookid);
        static void displayAll();
        static void displayBooks();
};