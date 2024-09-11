// bookutils.c
#include <stdio.h>
#include <Book.h>
#include <BookUtils.h>

/// @brief Adds a book to the library file
/// @param filePath File path of the library file
/// @param book The book object to be added
void writeBookToFile(const char *filePath, const Book *book) {
    FILE *file = fopen(filePath, "a"); // Open file in append mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    fprintf(file, "Name: %d\nAuthor: %s\nVolume:%s\nIssued: %s\n\n",
            book->name, book->author, book->volume, book->issued);
    fclose(file);
}

/// @brief Reads the books from the library file
/// @param filePath File path of the library file
void readBooksFromFile(const char *filePath) {
    FILE *file = fopen(filePath, "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    Book book;
    printf("%-20s %-20s %-20s %-10s\n", "Name", "Author", "Volume", "Issued"); // Print table headers
    printf("--------------------------------------------------------------------------------\n");
    while(fscanf(file,"Name: %s\nAuthor: %s\nVolume: %s\nIssued: %s\n\n",book.name,book.author,book.volume,book.issued)!=EOF){
        printf("%-20s %-20s %-20s %-10s\n", book.name, book.author, book.volume, book.issued);
    }



    fclose(file);
}

