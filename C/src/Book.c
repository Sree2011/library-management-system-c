///@file Book.c
///@page Book class

#include <stdio.h>
#include <string.h>
#include <Book.h>
#include <BookUtils.h>

const char *filePath = "./C/src/data/books.txt";
/// @brief Adds a book to the library
/// @param book The book object to be added
/// @param name The name of the book
/// @param author The author of the book
/// @param volume The volume number of the book
void add_book(Book *book, const char* name,const char* author,const char* volume) {
    strcpy(book -> name, name);
    strcpy(book -> author, author);
    strcpy(book -> volume, volume);
    strcpy(book -> issued, "No");

    writeBookToFile(filePath,book);

}

/// @brief Lists all the books in the library
void get_all_books(){
    readBooksFromFile(filePath);

}


/// @brief Issues a book and updates its status to Yes
/// @param name The name of the book to be issued
void issue_book(const char* name){
    
}

void return_book(const char* name){

}