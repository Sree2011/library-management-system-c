/// @file Book.h
///@page Book.h
/// @brief This file contains the definitions and functions for managing books in the library system.

#ifndef BOOK_H
#define BOOK_H

typedef struct {
    char name[100];   ///< Name of the book.
    char author[100]; ///< Author of the book.
    char volume[100]; ///< Volume of the book.
    char issued[100]; ///< Issued status of the book.
} Book;


void add_book(Book *book, const char* name, const char* author, const char* volume);
void get_all_books();
void issue_book(const char* name);
void return_book(const char* name);

#endif // BOOK_H
