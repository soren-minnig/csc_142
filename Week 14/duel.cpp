#include <iostream>

int roll_attack(int sides){
    return (rand() % sides) + 1;
}

int roll_defense(int sides){
    return (rand() % sides) + 1;
}

bool is_hit(int attack, int defense){
    if (attack > defense){
        return true;
    }
    else{
        return false;
    }
}

void duel(){
    int obi = 0;
    int maul = 0;
    for (int i = 1; i <= 5; i++){
        std::cout << "Round " << i << ": ";
        int attack = roll_attack(10);
        int defense = roll_defense(10);
        std::cout << "Obi-Wan attacks with " << attack << ", Maul defends with " << defense;

        bool success = is_hit(attack, defense);
        if (success == true){
            std::cout << " -- HIT!\n";
            obi++;
        }
        if (success == false){
            std::cout << " -- MISS!\n";
            maul++;
        }
    }
    if (obi > maul){
        std::cout << "Obi-Wan wins the duel!";
    }
    else{
        std::cout << "Darth Maul wins the duel!";
    }
}

int main(){
    duel();

    return 0;
}