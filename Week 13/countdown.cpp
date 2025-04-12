#include <iostream>

int main(){
    std::cout << "Beginning countdown." << std::endl;
    for (int i = 10; i > 0; i--){
        std::cout << i << "..." << std::endl;
    }
    std::cout << "Liftoff!" << std::endl;
}