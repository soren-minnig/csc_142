#include <iostream>
#include <utility>
#include <string>

int main(){
    std::string gadget1 = "Batarang", gadget2 = "Grappling Hook";
    std::cout << "Gadget 1: " << gadget1 << ", Gadget 2: " << gadget2 << std::endl;

    std::swap(gadget1, gadget2);
    std::cout << "Gadget 1: " << gadget1 << ", Gadget 2: " << gadget2 << std::endl;
}