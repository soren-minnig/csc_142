/*
File name: tax.cpp
Description: This program prompts the user to enter a description and the cost
of their purchase, and then calculates the tax and total of the purchase.
Creator: Soren Minnig
Date: 2/7/25
*/

#include <iostream>

int main() {
    // Constant variable declarations
    const double TAX = 0.06;

    // Variable declarations
    bool keepGoing = true;
    std::string desc, x, choice;
    double cost, calculatedTax, total;
    
    do {
        do {
            // User input
            std::cout<<"\nPlease describe your purchase: ";
            std::getline(std::cin, desc);
            std::cout<<"Enter the cost of the purchase: ";
            std::getline(std::cin, x);

            // Calculation
            cost = std::stod(x);
            if (cost < 0);
            std::cout<<"Please enter a valid number."<<std::endl;
        } while (cost < 0);

    
        calculatedTax = cost * TAX;
        total = cost + calculatedTax;

        std::cout<<"\n-- Overview of your purchase --"<<std::endl;
        std::cout<<"Description: " + desc<<std::endl;
        printf("Price: $%.2f\n", cost);
        printf("Sales tax: $%.2f\n", calculatedTax);
        printf("Total: $%.2f\n", total);
        std::cout<<"\nDo you want to continue? (y/n) ";
        std::getline(std::cin, choice);
        if (choice != "y") {
            keepGoing = false;
        }

    } while (keepGoing == true);
    
    return 0;
    
}