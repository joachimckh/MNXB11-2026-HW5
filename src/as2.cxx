#include "as2.hpp"

namespace homework {

// As2.1: knight class implementation

Knight::Knight(std::string name, std::string weapon)
    : Entity{name}, weapon{weapon} {   
    }

void Knight::attack() const {
    std::cout << name << " swings a " << weapon << '\n';
}

void Knight::setWeapon(std::string newWeapon){
    weapon = newWeapon;
}

std::unique_ptr<Entity> Knight::clone() const {
    return std::make_unique<Knight>(*this);
}

// As2.2: sorcerer class implementation

Sorcerer::Sorcerer(std::string name, std::string ability)
    : Entity{name}, ability{ability} {   
    }

void Sorcerer::attack() const {
    std::cout << name << " casts a " << ability << '\n';
}

void Sorcerer::setAbility(std::string newAbility){
    ability = newAbility;
}

std::unique_ptr<Entity> Sorcerer::clone() const {
    return std::make_unique<Sorcerer>(*this);
}

} // namespace homework

