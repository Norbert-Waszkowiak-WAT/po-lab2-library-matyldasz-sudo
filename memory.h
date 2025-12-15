#ifndef MEMORY_H
#define MEMORY_H

#include <string>
#include <vector>

class Book {
public:
    std::string title;
    std::string author;
    std::string isbn;

    Book(const std::string& t, const std::string& a, const std::string& i);
};

class Library {
private:
    std::vector<Book*> books;

public:
    Library();
    ~Library();

    void addBook(Book* book);
    void removeBook(int index);
};

#endif
