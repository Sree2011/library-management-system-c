/// @file BookUtils.h
/// @page BookUtils
/// @brief This is the header file for the utility functions

#ifndef BOOKUTILS_H
#define BOOKUTILS_H

#include "book.h"

void writeBookToFile(const char *filePath, const Book *book);
void readBooksFromFile(const char *filePath);
void updateIssuedStatus(const char *filePath, const char *bookName, const char *newStatus);

#endif // BOOKUTILS_H
