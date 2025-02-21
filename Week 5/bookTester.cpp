/*
File name: bookTester.cpp
Description: This program displays information about a book, and then changes
the price of each book. Finally, it displays the updated information.
Creator: Soren Minnig
Date: 2/21/25
*/

#include <iostream>
#include <cstdio>
#include <vector>
#include "book.h"

int main(){
    double new_price1 = 145.68, new_price2 = 117.79, new_price3 = 59.99;
    Book book1 = Book("013478796X", "Tony Gaddis", 
                "Starting Out With Java: From Control Structures through Data Structures", 
                4, "PE", 118.30);
    Book book2 = Book("0321409493", "John Lewis", 
                "Java Software Solutions: Foundations of Program Design", 
                5, "AW", 94.05);
    Book book3 = Book("0134743350", "Harvey Deitel", "Java How to Program, Early Objects",
                12, "PE", 134.84);

    // There must be a better way to format this, surely
    printf("\n------------------------------------------------------------------------------------------------------------------------");
    printf("\nISBN\t     AUTHOR\t    TITLE\t\t\t\t\t\t\t\t\tED   PUB  PRICE");

    printf("\n%s   %s    %s\t%d    %s\t $%.2f", book1.getISBN().c_str(), book1.getAuthor().c_str(),
                                book1.getTitle().c_str(), book1.getEdition(), book1.getPubCode().c_str(), book1.getPrice());

    printf("\n%s   %s\t    %s\t\t\t%d    %s\t $%.2f", book2.getISBN().c_str(), book2.getAuthor().c_str(),
                                book2.getTitle().c_str(), book2.getEdition(), book2.getPubCode().c_str(), book2.getPrice());

    printf("\n%s   %s  %s\t\t\t\t\t\t%d   %s\t $%.2f", book3.getISBN().c_str(), book3.getAuthor().c_str(),
                                book3.getTitle().c_str(), book3.getEdition(), book3.getPubCode().c_str(), book3.getPrice());
    printf("\n------------------------------------------------------------------------------------------------------------------------");
    
    printf("\nChanging book1 price from $%.2f to $%.2f", book1.getPrice(), new_price1);
    book1.changePrice(new_price1);
    printf("\nChanging book1 price from $%.2f to $%.2f", book2.getPrice(), new_price2);
    book2.changePrice(new_price2);
    printf("\nChanging book1 price from $%.2f to $%.2f", book3.getPrice(), new_price3);
    book3.changePrice(new_price3);

    printf("\n------------------------------------------------------------------------------------------------------------------------");
    printf("\nISBN\t     AUTHOR\t    TITLE\t\t\t\t\t\t\t\t\tED   PUB  PRICE");

    printf("\n%s   %s    %s\t%d    %s\t $%.2f", book1.getISBN().c_str(), book1.getAuthor().c_str(),
                                book1.getTitle().c_str(), book1.getEdition(), book1.getPubCode().c_str(), book1.getPrice());

    printf("\n%s   %s\t    %s\t\t\t%d    %s\t $%.2f", book2.getISBN().c_str(), book2.getAuthor().c_str(),
                                book2.getTitle().c_str(), book2.getEdition(), book2.getPubCode().c_str(), book2.getPrice());

    printf("\n%s   %s  %s\t\t\t\t\t\t%d   %s\t $%.2f", book3.getISBN().c_str(), book3.getAuthor().c_str(),
                                book3.getTitle().c_str(), book3.getEdition(), book3.getPubCode().c_str(), book3.getPrice());
    printf("\n------------------------------------------------------------------------------------------------------------------------");

    return 0;
}