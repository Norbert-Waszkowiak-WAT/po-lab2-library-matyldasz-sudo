#ifndef ARTICLE
#define ARTICLE
#include <iostream>
#include "author.h"
using namespace std;
class Article{
    string title;
    Author author;
    int publicationYear;
    string journal;
    public:
    Article();
    Article(string articleTitle, Author articleAuthor, int year, string journalName);
    Article(Article &other);
    string getTitle();
    Author getAuthor();
    int getPublicationYear();
    string getJournal();
};
#endif
 