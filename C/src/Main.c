/// @file Main.c
/// @page main module
/// @brief This is the main module

#include <Book.h>
#include <stdio.h>
#include <string.h>

void main(){
        printf("Hi! Welcome to our Library Book Management System!\n");
        printf("What should we call you?\n");
        char name_user[100];
        scanf("%s",&name_user);
        printf("Hello, %s\n",name_user);
        int option;

        // Display options to the user and take input
        printf("If you want to add a book, press 1");
        printf("If you want to see all books, press 2");
        printf("If you want to get a book issued, press 3");
        printf("If you want to return a book, press 4");
        scanf("%d",&option);

        // Perform operation based on the input
        switch(option)
        {
            case 1 :
                Book *book;
                printf("Enter the name of the book you want to add:\n");
                char name[100];
                scanf("%s",&name);
                printf("Enter the author of the book you want to add:\n");
                char author[100];
                scanf("%s",&author);
                printf("Enter the volume number of the book you want to add(Eg. 1st,2nd..):\n");
                char volume[100];
                scanf("%s",&volume);
                char issued[20] = "No";
                add_book(book,name,author,volume,issued);
            case 2 : list_books();
            case 3 : 
                printf("Enter the name of the book you want to be issued:");
                char name[100];
                scanf("%s",&name);
                issue_book(strlwr(name));
            
            case 4 :
                printf("Enter the name of the book you want to return:");
                char name[100];
                scanf("%s",&name);
                return_book(strlwr(name));
            
            default : printf("invalid input");
        }
}