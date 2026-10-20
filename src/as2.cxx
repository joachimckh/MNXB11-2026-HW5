#include "as2.hpp"

namespace homework {

Knight::Knight(const std::string name) : Entity(name), weapon_{"weapon"} {}

void Knight::attack() const {
    std::cout << name << " swings a " << weapon_ << "\n";
}

std::unique_ptr<Entity> Knight::clone() const {
    return std::make_unique<Knight>(*this);
}

void Knight::setWeapon(const std::string weapon){
    weapon_ = weapon;
}

Sorcerer::Sorcerer(const std::string name) : Entity(name), ability_{"ability"} {}

void Sorcerer::attack() const {
    std::cout << name << " casts an " << ability_ << "\n";
}

std::unique_ptr<Entity> Sorcerer::clone() const {
    return std::make_unique<Sorcerer>(*this);
}

void Sorcerer::setAbility(const std::string ability){
    ability_ = ability;
}




} // namespace homework

