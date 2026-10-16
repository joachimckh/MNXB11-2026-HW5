#include "as2.hpp"
//KNIGHT
namespace homework {
Knight::Knight(const std::string& name)
    :Entity(name){
    }
void Knight::attack() const {
    std::cout << getName() <<" swings a " << weapon << '\n';
}
std::unique_ptr<Entity> Knight::clone() const {
    return std::make_unique<Knight>(*this);
}
void Knight::setWeapon(const std::string& weapon){
    this->weapon = weapon;
}

//SORCERER
Sorcerer::Sorcerer(const std::string& name)
    :Entity(name){
    }
void Sorcerer::attack() const{
    std::cout << getName() << " casts a" << ability  << '\n';
}
std::unique_ptr<Entity> Sorcerer::clone() const{
    return std::make_unique<Sorcerer>(*this);
}
void Sorcerer::setAbility(const std::string& ability){
    this->ability=ability;
}
} // namespace homework

