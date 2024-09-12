///@file BookUtils.c
///@page BookUtils

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

/// @brief Updates the issued status of a book and rewrites the library file
/// @param filePath File path of the library file
/// @param bookName The name of the book to update
/// @param newStatus The new issued status
void updateIssuedStatus(const char *filePath, const char *bookName, const char *newStatus) {
    FILE *file = fopen(filePath, "r+"); // Open file in read/write mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    // // Temporary file to store updated data
    // FILE *tempFile = fopen("temp.txt", "w");
    // if (tempFile == NULL) {
    //     printf("Error opening temporary file.\n");
    //     fclose(file);
    //     return;
    // }

    Book book;
    int found = 0;
    while (fscanf(file, "Name: %s\nAuthor: %s\nVolume: %s\nIssued: %s\n\n", book.name, book.author, book.volume, book.issued) != EOF) {
        if (strcmp(book.name, bookName) == 0) {
            strcpy(book.issued, newStatus);
            found = 1;
        }
        //fprintf(tempFile, "Name: %s\nAuthor: %s\nVolume: %s\nIssued: %s\n\n", book.name, book.author, book.volume, book.issued);
    }

    fclose(file);
    // fclose(tempFile);

    // // Replace the original file with the updated file
    // remove(filePath);
    // rename("temp.txt", filePath);

    if (found) {
        printf("Book status updated successfully.\n");
    } else {
        printf("Book not found.\n");
    }
}


