#include "as2.hpp"

namespace homework {

    Knight::Knight(std::string name) : Entity(std::move(name)) {}

    void Knight::attack() const {
        std::cout << getName() << " swings a " << weapon << '\n';
    }

    std::unique_ptr<Entity> Knight::clone() const {
        return std::make_unique<Knight>(*this);
    }

    void Knight::setWeapon(const std::string& weapon) {
        this->weapon = weapon;
    }

    Sorcerer::Sorcerer(std::string name)
        : Entity(std::move(name)) {}

    void Sorcerer::attack() const {
        std::cout << getName() << " casts a " << ability << '\n';
    }

    std::unique_ptr<Entity> Sorcerer::clone() const {
        return std::make_unique<Sorcerer>(*this);
    }

    void Sorcerer::setAbility(const std::string& ability) {
        this->ability = ability;
    }

} // namespace homework

