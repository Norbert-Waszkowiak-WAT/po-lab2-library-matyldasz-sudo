#ifndef LIBRARY_H
#define LIBRARY_H
#include<iostream>
#include<vector>
#include "author.h"
#include "chapter.h"
class Library{
    private:
    Book**[] book[];
    int count;
    private:
    addBook (Book* book);
    removeBook(int index);
    public:
    addBook(Book* book);
    removeBook(int index);
    Book**getBooks();
    int getCount();
    ~Library();
}