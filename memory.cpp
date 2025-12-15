#include "memory.h"

Book::Book(const std::string& t, const std::string& a, const std::string& i)
    : title(t), author(a), isbn(i) {}

Library::Library() {}

Library::~Library() {
    for (Book* book : books) {
        delete book;
    }
    books.clear();
}

void Library::addBook(Book* book) {
    books.push_back(book);
}

void Library::removeBook(int index) {
    if (index >= 0 && index < (int)books.size()) {
        delete books[index];
        books.erase(books.begin() + index);
    }
}
