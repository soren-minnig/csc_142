#include <iostream>

class Goblin{
    public:
        Goblin(){
            std::cout<<"A Goblin has been summoned!"<<std::endl;
        }

        ~Goblin(){
            std::cout<<"The Goblin has been defeated!"<<std::endl;
        }
};

int main(){
    Goblin();

    return 0;
}