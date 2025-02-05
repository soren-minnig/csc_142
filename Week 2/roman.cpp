/*
File name: roman.cpp
Description: This program prompts the user to enter an integer to convert into
a roman numeral.
Creator: Soren Minnig
Date: 1/31/25
*/

#include <iostream>
#include <vector>
#include <string>

using std::string;

int main(){
    // I used my old Python roman numeral converter program as a reference
    std::vector<string> ones = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    std::vector<string> tens = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    int x;
    string o, t;

    do {
        std::cout<<"Enter a number to convert into a roman numeral (1-100)."<<std::endl;
        std::cin>>x;

        if (x < 1 || x > 100){
            // If an invalid number is entered
            std::cout<<"\nPlease enter a valid number."<<std::endl;
        }
        else {
            if (x == 100){
                printf("C");
            }
            else {
                // Uses vectors to seperate tens and ones, and then combines the
                // result to get the full roman numeral
                t = tens[(x % 100) / 10];
                o = ones[(x % 10)];
                string result = t + o;
                std::cout<<result;
            }
        }
    } while(x < 1 || x > 100);

    return 0;

}