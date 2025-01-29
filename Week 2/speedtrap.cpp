/*
File name: exams.cpp
Description: This program prompts the user to enter the speed limit and their
driving speed, and then determines if they went over the speed limit.
Creator: Soren Minnig
Date: 1/31/25
*/

#include <iostream>

int main(){
    // Variable declarations
    int speed_limit;
    double driver_speed;

    // User input
    std::cout<<"Enter the speed limit. ";
    std::cin>>speed_limit;
    std::cout<<"Enter your speed. ";
    std::cin>>driver_speed;

    // Display results
    std::cout<<"\n";
    if (driver_speed > speed_limit){
        std::cout<<"You drove " <<driver_speed<< " mph in a " <<speed_limit<< " mph zone, which is over the speed limit."<<std::endl;
        std::cout<<"You are now going to jail forever."<<std::endl;
    }
    if (driver_speed <= speed_limit){
        std::cout<<"You drove " <<driver_speed<< " mph in a " <<speed_limit<< " mph zone, which is not over the speed limit."<<std::endl;
    }
    
    return 0;

}