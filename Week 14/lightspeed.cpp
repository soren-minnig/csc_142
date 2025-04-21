#include <iostream>

void countdown_to_lightspeed(int seconds){
    for (int i  = seconds; i > 0; --i){
        std::cout << "Jumping in " << i << "..." << std::endl;
    }
    std::cout << "Punch it, Chewie!";
}

int main(){
    countdown_to_lightspeed(5);

    return 0;
}