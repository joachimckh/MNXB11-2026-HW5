/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() { 
    //as1.1
    int x=1;
    int y=2;
    int z=3;
    int* xptr = &x;
    int* yptr = &y;
    int* zptr = &z;
    std::cout << *xptr << *yptr << *zptr<< std::endl;
    swap_ptr(xptr, yptr, zptr);
    std::cout << *xptr << *yptr << *zptr<< std::endl;
  
    //as1.2
    UniqueData tester(2);
    std::cout<< tester.get()<< std::endl;
    tester.set(3);
    std::cout<< tester.get()<< std::endl;

    //as2.1
    homework::Knight knight1("Steve");
    knight1.setWeapon("sword");
    knight1.attack();
    std::unique_ptr<homework::Entity> knight2 = knight1.clone();
    knight2 -> attack();

    //as2.2
    homework::Sorcerer sorcerer1("wizard");
    sorcerer1.setAbility("fireball");
    sorcerer1.attack();
    std::unique_ptr<homework::Entity> sorcerer2 = sorcerer1.clone();
    sorcerer2 -> attack();



}

