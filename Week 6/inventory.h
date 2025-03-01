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
            if (nextEntry < 10) {
                books[nextEntry] = theBook;
                nextEntry++;
                return true;
            }
            else {
                return false;
            }
        }
        
        inline void changePrice(std::string isbn, double newPrice){
            for (int i = 0; i < 10; i++){
                if (books[i].getISBN() == isbn){
                    books[i].changePrice(newPrice);
                }
            }
        }

        inline void printInventory(){
            // I'll clean this up (as well as bookTester.cpp) when I get the chance...!
            printf("\n------------------------------------------------------------------------------------------------------------------------");
            printf("\nISBN\t     AUTHOR\t    TITLE\t\t\t\t\t\t\t\t\tED   PUB  PRICE");

            printf("\n%s   %s    %s\t%d    %s\t $%.2f", books[0].getISBN().c_str(), books[0].getAuthor().c_str(),
            books[0].getTitle().c_str(), books[0].getEdition(), books[0].getPubCode().c_str(), books[0].getPrice());

            printf("\n%s   %s\t    %s\t\t\t%d    %s\t $%.2f", books[1].getISBN().c_str(), books[1].getAuthor().c_str(),
            books[1].getTitle().c_str(), books[1].getEdition(), books[1].getPubCode().c_str(), books[1].getPrice());

            printf("\n%s   %s  %s\t\t\t\t\t\t%d   %s\t $%.2f", books[2].getISBN().c_str(), books[2].getAuthor().c_str(),
            books[2].getTitle().c_str(), books[2].getEdition(), books[2].getPubCode().c_str(), books[2].getPrice());

            printf("\n%s   %s    %s\t\t\t\t\t%d   %s\t $%.2f", books[3].getISBN().c_str(), books[3].getAuthor().c_str(),
            books[3].getTitle().c_str(), books[3].getEdition(), books[3].getPubCode().c_str(), books[3].getPrice());

            printf("\n%s   %s     %s\t\t\t%d   %s\t $%.2f", books[4].getISBN().c_str(), books[4].getAuthor().c_str(),
            books[4].getTitle().c_str(), books[4].getEdition(), books[4].getPubCode().c_str(), books[4].getPrice());

            printf("\n%s   %s  %s\t\t\t\t\t\t%d   %s\t $%.2f", books[5].getISBN().c_str(), books[5].getAuthor().c_str(),
            books[5].getTitle().c_str(), books[5].getEdition(), books[5].getPubCode().c_str(), books[5].getPrice());

            printf("\n%s   %.13s  %s\t\t\t\t\t\t\t\t\t%d   %s\t $%.2f", books[6].getISBN().c_str(), books[6].getAuthor().c_str(),
            books[6].getTitle().c_str(), books[6].getEdition(), books[6].getPubCode().c_str(), books[6].getPrice());

            printf("\n%s   %s   %s\t\t\t\t\t\t\t\t%d   %s\t $%.2f", books[7].getISBN().c_str(), books[7].getAuthor().c_str(),
            books[7].getTitle().c_str(), books[7].getEdition(), books[7].getPubCode().c_str(), books[7].getPrice());

            printf("\n%s   %s   %s\t\t\t\t\t\t\t%d   %s\t $%.2f", books[8].getISBN().c_str(), books[8].getAuthor().c_str(),
            books[8].getTitle().c_str(), books[8].getEdition(), books[8].getPubCode().c_str(), books[8].getPrice());

            printf("\n------------------------------------------------------------------------------------------------------------------------");
        }

        ~Inventory(){}
};