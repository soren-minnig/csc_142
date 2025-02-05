/*
File name: mpg.cpp
Description: This program prompts the user to enter a description of their car,
the amount of miles driven, and the amount of gallons used. Then, it calculates
miles per gallons and l/100km.
Creator: Soren Minnig
Date: 2/7/25
*/

#include <iostream>

int main(){   
    // Constant declarations
    const double KM_PER_MILE = 1.60934;
    const double LITERS_PER_GALLON = 3.78541;

    // Variable declarations
    std::string desc;
    int miles;
    double gallons;      
    float mpg, kilometers, liters, lpg;

    // Prompt for user inputs
    // Ensure that when typing input in the console, you give a whole number for miles,
    // otherwise you might run into miscalculations
    std::cout<<"Please enter a description of your car: ";
    std::getline(std::cin, desc);
    std::cout<<"How many miles did you drive? ";
    std::cin>>miles;
    std::cout<<"How many gallons of gas did you use? ";
    std::cin>>gallons;

    // Calculate the results - I used ceil(100 * x) / 100 to round up
    mpg = miles / gallons;
    kilometers = miles * KM_PER_MILE;
    liters = gallons * LITERS_PER_GALLON;
    lpg = (liters / kilometers * 100);

    // Print the user inputs and final results
    std::cout<<"\n";
    std::cout<<"Fuel efficiency of your " + desc + ":"<<std::endl;
    printf("You drove %d miles (%.2f kilometers) and used %.2f gallons (%.2f liters).", miles, kilometers, gallons, liters);
    printf("\nYour fuel efficiency is %.2f mpg (%.2f liters per 100 kilometers).", mpg, lpg);

    return 0;
}
