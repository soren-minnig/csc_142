#include <iostream>
#include <algorithm>
#include <string>

class Item{
    private:
        std::string name, desc;

    public:
        Item(){}

        Item(std::string na, std::string de){
            name = na;
            desc = de;
        }

        inline std::string getName(){
            return name;
        }

        inline std::string getDesc(){
            return desc;
        }

        friend std::ostream& operator<<(std::ostream& output, Item item){
            output << "\n" << item.getName().c_str() << " - " << item.getDesc().c_str();
            return output;
        }

        friend bool operator==(Item& item1, Item& item2){
            if (item1.name == item2.name){
                return true;
            }
    
            return false;
        }
};

class Inventory{
    private:
    Item* items;
    int size, nextEntry;

    public:
        Inventory(int len){
            size = len;
            nextEntry = 0;
            items = new Item[size];
        }

        Inventory(const Inventory& inv) : size(inv.size),nextEntry(inv.nextEntry) {
            items = new Item[size];
            for (int i = 0; i < size; i++) {
                items[i] = inv.items[i];
            }
        };

        ~Inventory(){
            // std::cout << "\nInventory destroyed!" << std::endl;
            delete[] items;
        };

        inline bool addItem(Item theItem){
            if (nextEntry <= size) {
                for (int i = 0; i < size; i++){
                    if (theItem == items[i]){
                        return false;
                    }
                }
                items[nextEntry] = theItem;
                nextEntry++;
                return true;
            }
            else {
                return false;
            }
        }

        inline void changeItem(Item theItem, int location){
            if (location >= size){}
            else{
                items[location] = theItem;
            }
        }

        inline void showInventory(){
            printf("\n\nINVENTORY CONTENTS");
            printf("\n---------------------------");
            for (int i = 0; i < size; i++){
                std::cout<<items[i];
            }
        }

        Inventory& operator=(const Inventory&) = default;

};

int main(){
    Inventory inventory1(3);

    Item itemSword("Sword", "Deals unworldly light dmg");
    Item itemShield("Shield", "Knocks back enemies upon parrying");
    Item itemPotion("Potion", "Can be used once to heal 20 hp");
    Item itemStone("Stone", "Does nothing");

    inventory1.addItem(itemSword);
    inventory1.addItem(itemShield);
    inventory1.addItem(itemPotion);

    Inventory inventory2 = inventory1;

    inventory2.changeItem(itemStone, 2);

    inventory1.showInventory();
    inventory2.showInventory();

    return 0;
}