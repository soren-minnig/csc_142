#pragma once
#include <string>
#include "book.h"

class Inventory
{
    private:
        Book* books;
        int nextEntry, length;

    public:
        Inventory(int size){
            nextEntry = 0;
            length = size;
            books = new Book[size];
        }

        inline bool addBook(Book theBook){
            if (nextEntry <= length) {
                for (int i = 0; i < length; i++){
                    if (theBook == books[i]){
                        return false;
                    }
                }
                books[nextEntry] = theBook;
                nextEntry++;
                return true;
            }
            else {
                return false;
            }
        }
        
        inline void changePrice(std::string isbn, double newPrice){
            for (int i = 0; i < length; i++){
                if (books[i].getISBN() == isbn){
                    books[i].changePrice(newPrice);
                }
            }
        }

        inline void printInventory(){
            // I'll clean this up (as well as bookTester.cpp) when I get the chance...!
            printf("\n-----------------------------------------------------------------------------------------");
            printf("\nISBN\t      AUTHOR          TITLE\t\t\t\t\tED PUB   PRICE");
            for (int i = 0; i < length; i++){
                std::cout<<books[i];
            }
            printf("\n-----------------------------------------------------------------------------------------");
        }

        ~Inventory(){}
};