/*
File name: lineNumbers.cpp
Description: This program prompts the user to enter an input .txt file to read
and an output .txt file to write the original text with line numbers to.
Creator: Soren Minnig
Date: 2/7/25
*/

#include <iostream>
#include <fstream>
#include <string>
#include <format>

using namespace std;

int main(){
    // Variable declarations
    string input, output, text;
    int lineNumbers = 0;
    ifstream inFile(input);
    ofstream outFile(output);

    // User input
    cout<<"Enter the name of a .txt file you want to read: ";
    getline(std::cin, input);
    inFile.open(input);
    cout<<"Enter the name of a .txt file to write the result to: ";
    getline(std::cin, output);
    outFile.open(output);

    // Reading and writing to a file
    while (getline(inFile, text)) {
        lineNumbers += 1;
        outFile<<lineNumbers<<". "<<text<<endl;
    }

    // Closing the files
    inFile.close();
    outFile.close();
    
    return 0;
}