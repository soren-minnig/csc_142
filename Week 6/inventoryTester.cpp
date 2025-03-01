/*
File name: inventoryTester.cpp
Description: This program creates an inventory of size 10, and then fills it
with books. It prints the initial inventory; then, it prints again with updated
prices.
Creator: Soren Minnig
Date: 2/28/25
*/

#include <iostream>
#include "book.h"
#include "inventory.h"

int main(){
    Inventory inventory(10);

    // I'll probably try to shorten this later
    Book book1 = Book("013478796X", "Tony Gaddis", 
        "Starting Out With Java: From Control Structures through Data Structures", 
        4, "PE", 118.30);
    if (inventory.addBook(book1)){
        printf("\nBook1 successfully loaded!");
    }
    Book book2 = Book("0321409493", "John Lewis", 
        "Java Software Solutions: Foundations of Program Design", 
        5, "AW", 94.05);
    if (inventory.addBook(book2)){
        printf("\nBook2 successfully loaded!");
    }
    Book book3 = Book("0134743349", "Harvey Deitel", "Java How to Program, Early Objects",
        11, "PE", 122.49);
    if (inventory.addBook(book3)){
        printf("\nBook3 successfully loaded!");
    }
    Book book4 = Book("013478797X", "Tony Gaddis",
        "Starting Out With Java: Early Objects",
        5, "PE", 121.75);
    if (inventory.addBook(book4)){
        printf("\nBook4 successfully loaded!");
    }
    Book book5 = Book("0321409493", "John Lewis", "Java Software Solutions: Foundations of Program Design",
        5, "AW", 94.00);
    if (inventory.addBook(book5)){
        printf("\nBook5 successfully loaded!");
    }
    Book book6 = Book("0134743350", "Harvey Deitel", "Java How to Program, Early Objects",
        12, "PE", 134.84);
    if (inventory.addBook(book6)){
        printf("\nBook6 successfully loaded!");
    }
    Book book7 = Book("002360692X", "Richard Johnsonbaugh", "Algorithms",
        1, "PH", 109.00);
    if (inventory.addBook(book7)){
        printf("\nBook7 successfully loaded!");
    }
    Book book8 = Book("1593276036", "Eric Matthes", "Python Crash Course",
        1, "NS", 39.95);
    if (inventory.addBook(book8)){
        printf("\nBook8 successfully loaded!");
    }
    Book book9 = Book("0143067889", "Ray Kurzweil", "The Singularity is Near",
        1, "PG", 17.70);
    if (inventory.addBook(book9)){
        printf("\nBook9 successfully loaded!");
    }

    inventory.printInventory();

    inventory.changePrice("013478796X", 50);
    inventory.changePrice("0143067889", 9.95);
    inventory.changePrice("0134743350", 100);
    printf("\nPrices have changed:");

    inventory.printInventory();

    return 0;
}