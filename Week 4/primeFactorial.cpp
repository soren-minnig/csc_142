/*
File name: primeFactorial.cpp
Description: This program generates a random number below 50 and tells the user
if the number is prime or not. If it is, it returns the factorial amd asks
whether the user wants to continue.
Creator: Soren Minnig
Date: 2/14/25
*/

#include <iostream>

// Prime method
bool isPrime(int x) {
    for (int i = 2; i < x; i++) {
        if ((x % i) == 0) {
            return false;
            break;
        }
    }
    return true;
}

// Factorial method
double factorial(int x) {
    double total = 1;
    for (double i = 1; i <= x; i++) {
        total = i * total;
    }
    return total;
}

int main() {
    char response = 'y';
    bool keepGoing = true;
    srand(time(0));

    do {
        int x = rand() % 50;
        // int x = 1;

        // Returning whether or not the number is prime
        if (isPrime(x) == false) {
            printf("\n%i is not a prime number.", x);
        }
        else {
            printf("\n%i is a prime number.", x);
            
            // Returning the factorial if prime
            printf("\nThe factorial of %i is %.0f.", x, factorial(x));
        }

        // Prompting the user to continue
        std::cout<<"\nDo you want to continue? (y/n) "<<std::endl;
        std::cin>>response;
        if (response == 'n') {
            keepGoing = false;
        }
        else {
            keepGoing = true;
        }
    } while (keepGoing == true);

    return 0;
}