/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() { 

    int a = 1;
    int b = 2;
    int c = 3;

    std::cout << "Before swap: a = " << a << ", b = " << b << ", c = " << c << std::endl;
    swap_ptr(&a, &b, &c);
    std::cout << "After swap: a = " << a << ", b = " << b << ", c = " << c << std::endl;

    UniqueData data(42);
    std::cout << "Initial value in UniqueData: " << data.get() << std::endl;
    
    data.set(99);

    std::cout << "Updated value in UniqueData: " << data.get() << std::endl;

    // Testing the Knight class

    homework::Knight knight("King Arthur");
    knight.setWeapon("sword");
    knight.attack();

    auto copy = knight.clone();
    copy->attack();

    homework::Sorcerer sorcerer("Merlin");
    sorcerer.setAbility("spell");
    sorcerer.attack();


}