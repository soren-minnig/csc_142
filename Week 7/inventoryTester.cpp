/*
File name: inventoryTester.cpp
Description: This program creates an inventory of size 10, and then fills it
with books. It prints the initial inventory; then, it prints again with updated
prices.
Creator: Soren Minnig
Date: 3/7/25
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
    else {
        printf("\nBook unsuccessfully added: %s", book1.getTitle().c_str());
    }
    Book book2 = Book("0321409493", "John Lewis", 
        "Java Software Solutions: Foundations of Program Design", 
        5, "AW", 94.05);
    if (inventory.addBook(book2)){
        printf("\nBook2 successfully loaded!");
    }
    else {
        printf("\nBook unsuccessfully added: %s", book2.getTitle().c_str());
    }
    Book book3 = Book("0134743349", "Harvey Deitel", "Java How to Program, Early Objects",
        11, "PE", 122.49);
    if (inventory.addBook(book3)){
        printf("\nBook3 successfully loaded!");
    }
    else {
        printf("\nBook unsuccessfully added: %s", book3.getTitle().c_str());
    }
    Book book4 = Book("013478797X", "Tony Gaddis",
        "Starting Out With Java: Early Objects",
        5, "PE", 121.75);
    if (inventory.addBook(book4)){
        printf("\nBook4 successfully loaded!");
    }
    else {
        printf("\nBook unsuccessfully added: %s", book4.getTitle().c_str());
    }
    Book book5 = Book("0321409493", "John Lewis",
        "Java Software Solutions: Foundations of Program Design",
        5, "AW", 94.00);
    if (inventory.addBook(book5)){
        printf("\nBook5 successfully loaded!");
    }
    else {
        printf("\nBook unsuccessfully added: %s", book5.getTitle().c_str());
    }
    Book book6 = Book("0134743350", "Harvey Deitel", "Java How to Program, Early Objects",
        12, "PE", 134.84);
    if (inventory.addBook(book6)){
        printf("\nBook6 successfully loaded!");
    }
    else {
        printf("\nBook unsuccessfully added: %s", book6.getTitle().c_str());
    }
    Book book7 = Book("002360692X", "Richard Johnsonbaugh", "Algorithms",
        1, "PH", 109.00);
    if (inventory.addBook(book7)){
        printf("\nBook7 successfully loaded!");
    }
    else {
        printf("\nBook unsuccessfully added: %s", book7.getTitle().c_str());
    }
    Book book8 = Book("1593276036", "Eric Matthes", "Python Crash Course",
        1, "NS", 39.95);
    if (inventory.addBook(book8)){
        printf("\nBook8 successfully loaded!");
    }
    else {
        printf("\nBook unsuccessfully added: %s", book8.getTitle().c_str());
    }
    Book book9 = Book("0143067889", "Ray Kurzweil", "The Singularity is Near",
        1, "PG", 17.70);
    if (inventory.addBook(book9)){
        printf("\nBook9 successfully loaded!");
    }
    else {
        printf("\nBook unsuccessfully added: %s", book9.getTitle().c_str());
    }
    Book book10 = Book("013478796X", "Tony Gaddis", 
        "Starting Out With Java: From Control Structures through Data Structures", 
        4, "PE", 118.30);
    if (inventory.addBook(book10)){
        printf("\nBook10 successfully loaded!");
    }
    else {
        printf("\nBook unsuccessfully added: %s", book10.getTitle().c_str());
    }
    Book book11 = Book("013478800X", "Tony Gaddis", 
            "Starting Out With Java: From Control Structures through Data Structures",
            5, "PE", 145.38);
    if (inventory.addBook(book11)){
        printf("\nBook11 successfully loaded!");
    }
    else {
        printf("\nBook unsuccessfully added: %s", book11.getTitle().c_str());
    }
    Book book12 = Book("1119056553", "Cay Horstmann", "Python for Everyone", 2, "WI", 98.38);
    if (inventory.addBook(book12)){
        printf("\nBook11 successfully loaded!");
    }
    else {
        printf("\nBook unsuccessfully added: %s", book12.getTitle().c_str());
    }

    inventory.printInventory();

    inventory.changePrice("013478796X", 50);
    inventory.changePrice("0143067889", 9.95);
    inventory.changePrice("0134743350", 100);
    printf("\nPrices have changed:");

    inventory.printInventory();

    return 0;
}