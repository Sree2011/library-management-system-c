/// @file Book.h
/// @brief This file contains the definitions and functions for managing books in the library system.

#ifndef BOOK_H
#define BOOK_H

/// @brief Structure to represent a book.
typedef struct {
    char name[100];   ///< Name of the book.
    char author[100]; ///< Author of the book.
    char volume[100]; ///< Volume of the book.
    char issued[100]; ///< Issued status of the book.
} Book;

/// @brief Adds a new book to the library.
/// @param book Pointer to the Book structure.
/// @param name Name of the book.
/// @param author Author of the book.
/// @param volume Volume of the book.
void add_book(Book *book, const char* name, const char* author, const char* volume);

/// @brief Retrieves all books in the library.
void get_all_books();

/// @brief Issues a book to a member.
/// @param name Name of the book to be issued.
void issue_book(const char* name);

/// @brief Returns a book to the library.
/// @param name Name of the book to be returned.
void return_book(const char* name);

#endif // BOOK_H
