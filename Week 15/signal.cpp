#include <iostream>
#include <utility>
#include <string>

int main(){
    std::pair <std::string, std::string> p("Joker", "Arkham Asylum");
    std::cout << p.first << " spotted at " << p.second << "!";
}