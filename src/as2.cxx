#include "as2.hpp"

namespace homework {

//as2.1
Knight::Knight(const std::string& name)
    : Entity(name)
{
}

void Knight::attack() const
{
   std::cout << name << " swings a " << weapon << '\n';
}

std::unique_ptr<Entity> Knight::clone() const 
{
    return std::make_unique<Knight>(*this);
}

void Knight::setWeapon(const std::string& newWeapon)
{
    weapon = newWeapon;
}

//as2.2
Sorcerer::Sorcerer(const std::string& name)
    : Entity(name)
{
}

void Sorcerer::attack() const
{
    std::cout << name << " casts " << ability << "\n"; 
}

std::unique_ptr<Entity> Sorcerer::clone() const
{
    return std::make_unique<Sorcerer>(*this);
}

void Sorcerer::setAbility(const std::string& newAbility)
{
    ability = newAbility;
}

} // namespace homework
