/*
File name: even.cpp
Description: This program generates 1000 random numbers and checks whether they
are even or odd. Then, it displays the results.
Creator: Soren Minnig
Date: 2/14/25
*/

#include <iostream>

bool isEven(int x) {
    return ((x % 2) == 0);
}

int main() {
    // Variable declarations
    int evenNumbers = 0, oddNumbers = 0, integers = 1000;
    srand(time(0));

    // Generate numbers
    for (int i = 0; i < integers; i++) {
        int x = rand() % 101;
        if (isEven(x)) {
            evenNumbers++;
        }
        else {
            oddNumbers++;
        }

    }

    // Return results
    std::cout<<"Here are the results:"<<std::endl;
    printf("Amount of random numbers generated: %i\n", integers);
    printf("Total amount of even numbers: %i\n", evenNumbers);
    printf("Total amount of odd numbers: %i\n", oddNumbers);

    return 0;

}