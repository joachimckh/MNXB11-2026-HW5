/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() { 
    auto knight = homework::Knight("Ben", "sword");
    
    knight.attack();
    knight.setWeapon("axe");
};

