/*
File name: rectangleTester.cpp
Description: This program prompts the user to enter the length and width of
three rooms. Then, it returns the area of each room individually, as well as
the total area in square feet.
Creator: Soren Minnig
Date: 2/21/25
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include "rectangle.h"

int main(){
    std::vector<std::string> rooms = {"", "kitchen", "bedroom", "living room"};
    Rectangle rectangles[4];
    int width, length;
    double totalArea;

    // I tried to shorten the code by making for-loops
    for (int i = 1; i < 4; i++) {
        printf("Enter the length of the %s: ", rooms[i].c_str());
        std::cin>>length;
        rectangles[i].setLength(length);
        printf("Enter the width of the %s: ", rooms[i].c_str());
        std::cin>>width;
        rectangles[i].setWidth(width);
    }

    printf("\nResults\n");
    for (int i = 1; i < 4; i++) {
        printf("The %s is %d x %d, with an area of %.2f square feet.\n", rooms[i].c_str(), rectangles[i].getLength(),
                                            rectangles[i].getWidth(), rectangles[i].getArea());
        totalArea += rectangles[i].getArea();
    }
    printf("\nThe total area is %.2f square feet.", totalArea);

    return 0;
}