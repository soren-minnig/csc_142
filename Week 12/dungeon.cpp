#include <iostream>
#include <cstdlib>
#include <ctime>

int diceRoll(int sides){
    return (rand() % sides) + 1;
}

int main(){
    srand(time(0));

    int playerAC = 15;
    int playerHP = 20;
    int goblinAC = 12;
    int goblinHP = 10;
    bool won = false;

    std::cout << "A goblin stands in your way." << std::endl;

    while (playerHP > 0 && goblinHP > 0){
        std::cout << "\nYour turn:"<<std::endl;
        int player_roll = diceRoll(20);
        std::cout << "You roll a " << player_roll << "." << std::endl;

        if (player_roll >= goblinAC){
            int playerDMG = diceRoll(8);
            goblinHP -= playerDMG;
            if (goblinHP < 0){
                goblinHP = 0;
            }
            std::cout << "You hit the goblin, dealing " << playerDMG << " DMG to the goblin!";
            std::cout << "(Goblin's current HP: " << goblinHP << ")" << std::endl;
        }
        else {
            std::cout << "Your attack misses!" << std::endl;
        }

        if (goblinHP <= 0) {
            won = true;
            break;
        }

        std::cout << "\nGoblin's turn:" << std::endl;
        int goblin_roll = diceRoll(20);
        std::cout << "The goblin rolls a " << goblin_roll << "." << std::endl;

        if (goblin_roll >= playerAC){
            int goblinDMG = diceRoll(6);
            playerHP -= goblinDMG;
            std::cout << "The goblin attacks you, dealing " << goblinDMG << " DMG to you!";
            std::cout << "(Your current HP: " << playerHP << ")" << std::endl;
        }
        else {
            std::cout << "The goblin's attack misses!" << std::endl;
        }
    }

    if (won == true){
        std::cout << "You defeated the goblin!" << std::endl;
    }
    else{
        std::cout << "You lost! Womp womp." << std::endl;
    }

    return 0;
}