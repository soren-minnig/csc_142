#include <iostream>
#include <string>

class MagicItem{
    private:
        std::string name, magicType;
        int charges;
    public:
        MagicItem(const std::string n, const std::string mt, int ch){
            name = n;
            magicType =  mt;
            charges = ch;
            std::cout<<name<<" ("<<magicType<<") created with "<<charges<<" charges!"<<std::endl;
        }

        inline std::string getName(){
            return name;
        }

        inline std::string getMagicType(){
            return magicType;
        }

        inline void useItem(){
            if (charges > 0){
                charges--;
                std::cout<<name<<" ("<<magicType<<") used! Charges remaining: "<<charges<<std::endl;
                }
            if (charges == 0){
                std::cout<<name<<" ("<<magicType<<") has no charges remaining!"<<std::endl;
            }
        }
};

int main(){
    MagicItem sword{"Holy Blade", "LIGHT", 3};
    MagicItem harp = MagicItem{"Harp of Healing", "EARTH", 5};

    sword.useItem();
    harp.useItem();
    sword.useItem();
    sword.useItem();

}