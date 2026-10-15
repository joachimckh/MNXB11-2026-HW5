/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

using namespace homework;

int main() { 

    // test As 1.1 
    int a = 1;
    int b = 2;
    int c = 3;

    int* a_ptr{&a};
    int* b_ptr{&b};
    int* c_ptr{&c};

    std::cout << " a = " << *a_ptr << " Address: " << a_ptr << std::endl;
    std::cout << " b = " << *b_ptr << " Address: " << b_ptr << std::endl;
    std::cout << " c = " << *c_ptr << " Address: " << c_ptr << std::endl;

    homework::swap_ptr(a_ptr, b_ptr, c_ptr);

    std::cout << " a = " << *a_ptr << " Address: " << a_ptr << std::endl;
    std::cout << " b = " << *b_ptr << " Address: " << b_ptr << std::endl;
    std::cout << " c = " << *c_ptr << " Address: " << c_ptr << std::endl;
  
    // Test As 1.2
    homework::UniqueData data{666};
    std::cout << data.get() << std::endl;
    data.set(67);
    std::cout << data.get() << std::endl;

    // Test As 2.1
    homework::Knight knigth{"Arthur"};
    knigth.setWeapon("stick");
    knigth.attack();

    auto knigth_clone = knigth.clone();
    std::cout << knigth_clone->getName() << std::endl;

    // Test As 2.1 
    homework::Sorcerer sorcerer{"Merlin"};
    sorcerer.setAbility("polymarization");
    sorcerer.attack();

    auto sorcerer_clone = sorcerer.clone();
    std::cout << sorcerer_clone->getName() << std::endl;;

    return 0;

}

