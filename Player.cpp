#include "Player.h"
#include <iostream>

Player::Player(std::string name, int health)
    : name(name), health(health), inventory(10)
{
    std::cout << "Default constructor called for Player." << std::endl;
}

Player::~Player() {
    std::cout << "Player " << name << " has been destroyed." << std::endl;
}

std::string Player::getName() const {
    return name;
}

int Player::getHealth() const {
    return health;
}

void Player::showInventory() const {
    std::cout << "\n--- " << name << "'s Inventory ---" << std::endl;
    inventory.display();
}

void Player::addItem(const Item& item) {
    
    if (inventory.addItem(item)) {
        std::cout << name << " found a [" << item.getName() << "] (Value: " << item.getValue() << ")" << std::endl;
    }
}