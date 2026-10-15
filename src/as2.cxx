#include "as2.hpp"

namespace homework {

Knight::Knight(std::string name, std::string weapon)
    : Entity{name}, _weapon{weapon} {}

Knight::Knight(std::string name)
    : Entity{name} {}

void Knight::attack() const {
    std::cout << name << " swings a " << _weapon << "\n" << std::endl;
}

std::unique_ptr<homework::Entity> Knight::clone() const {
    return std::make_unique<Knight>(*this);
}

Sorcerer::Sorcerer(std::string name, std::string ability)
    : Entity{name}, _ability{ability} {}

Sorcerer::Sorcerer(std::string name)
    : Entity{name} {}

void Sorcerer::attack() const {
    std::cout << name << " casts a " << _ability << "\n" << std::endl;
}

std::unique_ptr<homework::Entity> Sorcerer::clone() const {
    return std::make_unique<Sorcerer>(*this);
}


} // namespace homework

