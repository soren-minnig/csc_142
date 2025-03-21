#include <iostream>
#include <string>

enum class CharacterClass{
    Warrior,
    Mage,
    Archer,
    Rogue
};

struct Character{
    std::string name;
    CharacterClass type;
    int health;
    float strength;
};

std::string classString(CharacterClass type){
    switch(type){
        case CharacterClass::Warrior: return "Warrior";
        case CharacterClass::Mage: return "Mage";
        case CharacterClass::Archer: return "Archer";
        case CharacterClass::Rogue: return "Rogue";
        default: return "Unknown";
    }
}

int main(){
    float totalHealth;
    Character characters[4]{
        {"Ace", CharacterClass::Warrior, 100, 100.0f},
        {"Yu-Yan", CharacterClass::Mage, 75, 125.0f},
        {"Jun", CharacterClass::Archer, 125, 75.0f},
        {"To'Ra", CharacterClass::Rogue, 75, 65.5f}
    };

    std::cout<<"Characters"<<std::endl;
    std::cout<<"--------------"<<std::endl;
    for (int i = 0; i < 4; i++){
        std::cout<<"\nName: "<< characters[i].name  <<std::endl;
        std::cout<<"Type: "<< classString(characters[i].type) <<std::endl;
        std::cout<<"Health: "<<  characters[i].health <<std::endl;
        std::cout<<"Power: "<<  characters[i].strength <<std::endl;
        totalHealth += characters[i].health;
    }
    float averageHealth = totalHealth / (float)4;
    std::cout<<"\nAverage Health: "<< averageHealth <<std::endl;
    
    return 0;
}