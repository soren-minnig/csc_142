#include <iostream>

void drinkPotion(int& hp){
    hp += 5;
}

void takeDamage(int& hp){
    hp -= 3;
}

int main() {
    int hp = 10;

    std::cout<<"Initial health: "<<hp<<std::endl;

    drinkPotion(hp);

    std::cout<<"You drank a potion! (+5 HP): "<<hp<<std::endl;

    takeDamage(hp);

    std::cout<<"You took damage! (-3 HP): "<<hp<<std::endl;

    return 0;
}