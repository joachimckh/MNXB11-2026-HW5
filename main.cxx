/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>
#include <cassert>
#include "as2.hpp"
#include <sstream>


using namespace homework;

int main() { 

    // Test 1.1
    int a = 1;
    int b = 2;
    int c = 3;

    homework::swap_ptr(&a, &b, &c);

    assert(a == 2);
    assert(b == 3);
    assert(c == 1);
    std::cout << "Test 1.1 PASSED: swap_ptr" << std::endl;


    // Test 1.2
    homework::UniqueData o{42};

    assert(o.get() == 42);

    o.set(99);

    assert(o.get() == 99);
    std::cout << "Test 1.2 PASSED: UniqueData" << std::endl;
 // Test Knight
    {
        homework::Knight knight("Janx");
        knight.setWeapon("sword");

        std::ostringstream oss;
        std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();

        std::cout.rdbuf(oss.rdbuf());
        knight.attack();
        std::cout.rdbuf(oldCoutStreamBuf);
        std::cout << "Actual Knight output: [" << oss.str() << "]\n";

        auto knightClone = knight.clone();

        if (oss.str() == "Janx swings a sword\n" &&
            knightClone->getName() == "Janx")
            std::cout << "Knight test PASSED\n";
        else
            std::cout << "Knight test FAILED\n";
    }

    // Test Sorcerer
    {
        homework::Sorcerer sorcerer("Jinx");
        sorcerer.setAbility("fireball");

        std::ostringstream oss;
        std::streambuf* oldCoutStreamBuf = std::cout.rdbuf();

        std::cout.rdbuf(oss.rdbuf());
        sorcerer.attack();
        std::cout.rdbuf(oldCoutStreamBuf);
        std::cout << "Actual Sorcerer output: [" << oss.str() << "]\n";
        auto sorcClone = sorcerer.clone();

        if (oss.str() == "Jinx casts a fireball\n" &&
            sorcClone->getName() == "Jinx")
            std::cout << "Sorcerer test PASSED\n";
        else
            std::cout << "Sorcerer test FAILED\n";
    }


    return 0;
  
}

