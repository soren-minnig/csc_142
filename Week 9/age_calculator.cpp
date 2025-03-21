#include <iostream>
#include <string>

int main(){
    int age;
    std::string name;

    std::cout<<"\nEnter your name: ";
    std::cin>>name;
    std::cout<<"\nEnter your age: ";
    std::cin>>age;

    int day_age = age * 365;
    std::cout<<"\nHello, "<<name<<"! You are approximately "<<day_age<<" days old.";
    return 0;
}