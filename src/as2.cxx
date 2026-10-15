#include "as2.hpp"

namespace homework {



    // KNIGHT
    Knight::Knight(const std::string name, std::string weapon)
        : Entity(name), weapon_(weapon) {}
    
    Knight::Knight(const std::string name)
        : Entity(name), weapon_("nothing") {}

   void Knight::attack() const {
      std::cout << name << " swings a " << weapon_ << "\n";
    };

    std::unique_ptr<Entity> Knight::clone() const {
        return std::make_unique<Knight>(*this);
    };

    void Knight::setWeapon(const std::string newWeapon) {
        weapon_ = newWeapon;
        std::cout << name << " the Knight now fights with a " << weapon_ << "!\n";
    };


    // SORCERER
    Sorcerer::Sorcerer(const std::string name)
        : Entity(name), ability_("none") {}
    

    void Sorcerer::attack() const {
        std::cout << name << " casts a " << ability_ <<"\n";

    };

    void Sorcerer::setAbility(const std::string newAbility) {
        ability_ = newAbility;
        std::cout << name << " the Sorcerer now has " << ability_ << "magic!\n";

    };

    std::unique_ptr<Entity> Sorcerer::clone() const {
        return std::make_unique<Sorcerer>(*this);
    };



} // namespace homework

