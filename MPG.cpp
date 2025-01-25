/* 
   MPG.cpp
     Calculate the fuel efficiency of a vehicle
 
   Keyboard inputs:
     Vehicle description (string)
     Miles traveled (int)
     Fuel used in gallons (double)
 
   Outputs:
     Miles per gallon
 
   Name: Soren Minnig
   Date: 1/24/25


  The starter file calculates the fuel efficiency of a vehicle in MPG (miles per gallon), a
    quantity commonly used in the US. In much of the rest of the world, fuel efficiency is
    often reported in L/100km (liters per 100 kilometers)

 
  Your task

    Extend the starter file to calculate both measures—MPG and L/100km—for the given
    user input.
    The starter file includes a constant for KM_PER_MILE which you must use in your
    calculation; you must also add a new constant for LITERS_PER_GALLON (you may need
    to use Google to find the correct conversion factor to use). Add appropriate constant(s),
    variable(s), assignment statement(s), and print statement(s) to the program to
    generate correct and understandable output. An example will be shown in class.
 

    For up to +2 points extra credit, format the output values to have exactly two digits to
    the right of the decimal place.
 */

#include <iostream>
#include <iomanip>
#include <cmath>

int main(){   
    // Constant declarations
    const double KM_PER_MILE = 1.60934;
    const double LITERS_PER_GALLON = 3.78541;

    // Variable declarations
    std::string desc;
    int miles;
    float gallons;      
    float mpg;
    float kilometers;
    float liters;
    float lpg;

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
    mpg = ceil(100 * (miles / gallons)) / 100;
    kilometers = miles * KM_PER_MILE;
    liters = gallons * LITERS_PER_GALLON;
    lpg = ceil(100 * (liters / kilometers * 100)) / 100;

    // Rounding after calculating lpg
    kilometers = ceil(100 * kilometers) / 100;
    liters = ceil(100 * liters) / 100;

    // Print the user inputs and final results
    std::cout<<"\n";
    std::cout<<"Fuel efficiency of your " + desc + ":"<<std::endl;
    std::cout<<"You drove " << miles << " miles (" << kilometers << " kilometers) and used "
    << gallons << " gallons (" << liters << " liters)."<<std::endl;
    std::cout<<"Your fuel efficiency is " << mpg << " miles per gallon ("
    << lpg << " liters per 100 kilometers)."<<std::endl;

    return 0;
}
