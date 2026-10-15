#include "as2.hpp"

namespace homework {

Knight::Knight(std::string name) : Entity(name) {}

void Knight::attack() const {
    std::cout << name << " swings a " << weapon << std::endl;
}

std::unique_ptr<Entity> Knight::clone() const {
    return std::make_unique<Knight>(*this);
}

void Knight::setWeapon(std::string new_weapon) {
    weapon = new_weapon;
}


Sorcerer::Sorcerer(std::string name) : Entity(name) {}

void Sorcerer::attack() const {
    std::cout << name << " casts a " << ability << std::endl;
}

std::unique_ptr<Entity> Sorcerer::clone() const {
    return std::make_unique<Sorcerer>(*this);
}

void Sorcerer::setAbility(std::string new_ability) {
    ability = new_ability;
}


} // namespace homework

