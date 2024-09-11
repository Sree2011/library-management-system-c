// bookutils.h
#ifndef BOOKUTILS_H
#define BOOKUTILS_H

#include "book.h"

void writeBookToFile(const char *filePath, const Book *book);
void readBooksFromFile(const char *filePath);

#endif // BOOKUTILS_H
