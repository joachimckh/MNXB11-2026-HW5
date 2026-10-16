/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() { 
    // as1 test 1.1
    int x = 1, y = 2, z = 3;
    int *a = &x, *b = &y, *c = &z;

    swap_ptr(a, b, c);

    std::cout << "*a: " << *a << "\n";
    std::cout << "*b: " << *b << "\n";
    std::cout << "*c: " << *c << "\n";

    // 1.2
    UniqueData d(12);
    std::cout << d.get() << "\n";
    d.set(30);
    std::cout << d.get() << "\n";

    // 2.1
    Knight king("Baldwin");
    king.attack();
    king.setWeapon("knife");
    king.attack();
    std::unique_ptr<Entity> knightClone = king.clone();
    knightClone->attack();

    // 2.2
    Sorcerer sc("Wiz");
    sc.attack();
    sc.setAbility("lightning");
    sc.attack();
    std::unique_ptr<Entity> sorcererClone = sc.clone();
    sorcererClone->attack();

}

