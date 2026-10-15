#include "as2.hpp"

namespace homework {


Knight::Knight(const std::string& name)
    :Entity(name){}

void Knight::setWeapon(const std:: string& weapon){
weapon_ = weapon;
}

void Knight::attack() const{
    std::cout<< name << " swings a " << weapon_ << std::endl;
}

std::unique_ptr<Entity> Knight::clone()const{
    return std::make_unique<Knight>(*this);
}

Sorcerer::Sorcerer(const std:: string& name)
    :Entity(name){}

void Sorcerer::setAbility(const std:: string& ability){
ability_ = ability;
}

void Sorcerer::attack() const{
    std::cout<< name << " casts a " << ability_ << std::endl;
}

std::unique_ptr<Entity> Sorcerer::clone()const{
    return std::make_unique<Sorcerer>(*this);
}




} // namespace homework

