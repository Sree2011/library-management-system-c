#ifndef BOOK.h
#define BOOK.h

typedef struct{
    char name[100];
    char author[100];
    char volume[100];
    char issued[100];
} Book;


void add_book(Book *book, const char* name,const char* author,const char* volume);
void get_all_books();
void issue_book(const char* name);
void return_book(const char* name);


#endif