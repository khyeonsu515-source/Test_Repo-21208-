#ifndef BOOK_H
#define BOOK_H

typedef struct {
    int id;
    char title[50];
    int isAvailable; 
} Book;

void printBookInfo(Book b);

Book rentBook(Book b); 

#endif
