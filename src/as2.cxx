#include "as2.hpp"

namespace homework {

//can currently caus grammatical mistakes with "a/an"
void Knight::attack() const {
    std::cout << name << " swings a " << weapon << "\n";
    return;
}

std::unique_ptr<Entity> Knight::clone() const {
    return std::make_unique<Knight>(*this);
}

void Knight::setWeapon(std::string weaponName) {
    weapon = weaponName;
    return;
}

//can currently caus grammatical mistakes with "a/an"
void Sorcerer::attack() const {
    std::cout << name << " casts a " << ability << "\n";
    return;
}

std::unique_ptr<Entity> Sorcerer::clone() const {
    return std::make_unique<Sorcerer>(*this);
}

void Sorcerer::setAbility(std::string abilityName) {
    ability = abilityName;
    return;
}

} // namespace homework

