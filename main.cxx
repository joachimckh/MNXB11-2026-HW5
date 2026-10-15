/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() { 
       int a = 10;
    int b = 20;
    int c = 30;

    homework::swap_ptr(&a, &b, &c);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;

    homework::UniqueData number(5);
    std::cout << "Initial value: " << number.get() << std::endl;

    number.set(10);
    std::cout << "New value: " << number.get() << std::endl;


    //==========================
std::cout << "\nTesting part 2" << std::endl;

homework::Knight knight("Arthur");
knight.setWeapon("sword");
knight.attack();


homework::Sorcerer sorcerer("Jinx");
sorcerer.setAbility("fireball");
sorcerer.attack();


std::unique_ptr<homework::Entity> clonedKnight = knight.clone();
clonedKnight->attack();

    return 0;/*  */
  
}

