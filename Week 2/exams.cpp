/*
File name: exams.cpp
Description: This program prompts the user to enter three exam scores and
calculates their average score.
Creator: Soren Minnig
Date: 1/31/25
*/

#include <iostream>

int main(){
    // Variable declarations
    std::string name;
    int exam_1, exam_2, exam_3;
    double average;

    // Prompt for user inputs
    std::cout<<"Enter your name. ";
    std::getline(std::cin, name);
    std::cout<<"Enter the first exam score: ";
    std::cin>>exam_1;
    std::cout<<"Enter the second exam score: ";
    std::cin>>exam_2;
    std::cout<<"Enter the third exam score: ";
    std::cin>>exam_3;

    // Calculate average
    average = (exam_1 + exam_2 + exam_3) / (float)3;

    // Display results
    std::cout<<"\n";
    std::cout<<"Hello, " + name + "."<<std::endl;
    std::cout<<"Your three exam scores are " <<exam_1<< ", " <<exam_2<< ", and " <<exam_3<< "."<<std::endl;
    printf("Your average exam score is %.2f.", average);

    return 0;
}