#include <iostream>
#include "Player.h"
#include "Item.h"

int main() {


    Player hero("Hero", 100);
    Item sword("Sword", 10);
    Item shield("Shield", 15);
    Item potion("Health Potion", 5);
    Item droppedItem("Old Boot", 1);  // This one will NOT be added to inventory

    std::cout << "\n--- Adding items to hero's inventory ---" << std::endl;

    hero.addItem(sword);
    hero.addItem(shield);
    hero.addItem(potion);
    hero.showInventory();


    std::cout << "\nTotal items added to inventories: "
              << Item::getTotalItems() << std::endl;

    return 0;
}