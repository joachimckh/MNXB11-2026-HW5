/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() { 
    int a = 5;
    int b = 10;
    int c = 15;
    std::cout << "Before swap_ptr: a = " << a << ", b = " << b << ", c = " << c << "\n";
    swap_ptr(&a, &b, &c);
    std::cout << "After swap_ptr: a = " << a << ", b = " << b << ", c = " << c << "\n";

    std::cout << "\n";
    UniqueData d(20);
    std::cout << "UniqueData before d.set(25): " << d.get() << "\n";
    d.set(25);
    std::cout << "UniqueData after d.set(25): " << d.get() << "\n";

    std::cout << "\n";
    Knight knight("knight_1");
    knight.setWeapon("weapon_1");
    knight.attack();
    std::unique_ptr<Entity> cloned_knight = knight.clone();
    std::cout << "cloned_knight getName(): " << cloned_knight->getName() << "\n";
    cloned_knight->attack();

    std::cout << "\n";
    Sorcerer sorcerer("sorcerer_1");
    sorcerer.setAbility("Ability_1");
    sorcerer.attack();
    std::unique_ptr<Entity> cloned_sorcerer = sorcerer.clone();
    std::cout << "cloned_sorcerer getName(): " << cloned_sorcerer->getName() << "\n";
    cloned_sorcerer->attack();

}