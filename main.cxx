/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */
#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() { 
    int a = 4;
    int b = 5;
    int c = 6;

    swap_ptr(&a, &b, &c); // & gives the memory adress of abc respectively
    std::cout << "a, b, c: " << a << ", " << b << ", "<< c <<'\n';

    homework::UniqueData number(13);
    std::cout << number.get() << '\n';
    number.set(666);
    std::cout << number.get() << '\n';
    
    homework::Knight knight("Evelina");
    knight.setWeapon("smörkniv");
    knight.attack();

    auto copy = knight.clone();
    copy -> attack();

    homework::Sorcerer sorcerer("Maja");
    sorcerer.setAbility(" deadly spell on Evelinas smörkniv");
    sorcerer.attack();

    auto sorcerercopy = sorcerer.clone();
    sorcerercopy -> attack();

    return 0;
}

