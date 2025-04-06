#include <iostream>
#include <string>

int main(){
    int gold = 100, potions = 0;
    bool run = true;
    std::string input;

    printf("You enter a humble shack, the smell of chemicals pervading your senses.\n");

    while (run == true){
        printf("\nWould you like to buy a potion, or leave? (buy/leave) ");
        std::cin>>input;
        if (input == "buy"){
            if (gold >= 10){
                gold = gold - 10;
                potions++;
                std::cout<<"\nYou bought a potion! Remaining balance: "<<gold<<std::endl;
            }
            else{
                std::cout<<"\nSorry, you don't have enough gold. Current balance: "<<gold<<std::endl;
            }
        }
        else{
            run = false;
        }
    }
    return 0;
}