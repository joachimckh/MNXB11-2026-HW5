#include "as2.hpp"

namespace homework {

void Knight::attack() const {
    std::cout << name << " swings a " << weapon_ << std::endl;
}

void Sorcerer::attack() const {
    std::cout << name << " uses " << ability_ << std::endl;
}


} // namespace homework

