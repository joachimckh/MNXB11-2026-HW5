#pragma once

#include <string>
#include <iostream>
#include <random>
#include <memory>
#include <sstream> //I added this because of an error, used ChatGPT for this

namespace homework {

  // Random number generator setup
  inline std::random_device rd;
  inline std::mt19937 gen(rd()); 
  inline std::uniform_real_distribution<double> dist(0.0, 1.0);
  // to generate a random number between 0 and 1, use auto random_number = dist(gen);

  // Base class for entities
  // Has a implemented method getName()
  // Has a pure virtual method attack()
  // Has a pure virtual method clone() to support polymorphic copying
  // TO DO: Nothing, everything is implemented for you
  struct Entity {
      explicit Entity(const std::string name) : name{std::move(name)} {}
      virtual ~Entity() = default;
      virtual void attack() const = 0;
      std::string getName() const {
        return name;
      }

      virtual std::unique_ptr<Entity> clone() const = 0;
    protected:
      std::string name;
  };
  
  ///////// EXERCISES BEGIN BELOW /////////




  // as 2.1
  // Derived class Knight
  // TO DO: implement attack() and clone() and setWeapon()
  // Should have a private member variable for weapon (std::string)
  // Note: use std::make_unique in clone() and the \it{this} pointer to copy the object. E.g. std::make_unique<Type>(*this);
  // The attack should use std::cout to print something like "<name> swings a <weapon>\n"
  // The setWeapon() method should set the weapon variable (the private member variable) 

struct Knight : public Entity {
    Knight(const std::string name) : Entity(name) {}

    void attack() const override {
        std::cout << name << " swings a " << weapon << "\n";
    }

    std::unique_ptr<Entity> clone() const override {
        return std::make_unique<Knight>(*this);
    }

    void setWeapon(const std::string weapon) {
        this->weapon = weapon;
    }

private:
    std::string weapon;
};



  // as 2.2
  // Derived class Sorcerer
  // TO DO: implement attack() and clone() and setAbility()
  // Same as the Knight class

struct Sorcerer : public Entity {
    Sorcerer(const std::string name) : Entity(name) {}

    void attack() const override {
        std::cout << name << " casts a " << ability << "\n";
    }

    std::unique_ptr<Entity> clone() const override {
        return std::make_unique<Sorcerer>(*this);
    }

    void setAbility(const std::string ability) {
        this->ability = ability;
    }

private:
    std::string ability;
};

  /////////


  // NOT MANDATORY (Stretch goal): as 2.3. You can pass assignment without doing this one. 
  // If you want to see how templates work, you can implement this one.
  // Duel class template
  // TO DO: create a struct/class called Duel that is templated by two types (T1 and T2)
  // The constructor should take two pointers (T1* and T2*)
  // The fight() method should:
  // - call attack() on both entities
  // - randomly select one of the two entities as the winner (use the random number generator above)
  // - print to std::cout "<name> wins the duel!\n"
  // - return a std::unique_ptr<Entity> to the winner (use clone() to copy the object)

template <typename T1, typename T2>
struct Duel {
    Duel(T1* first, T2* second) : first{first}, second{second} {}

    std::unique_ptr<Entity> fight() const {
        first->attack();
        second->attack();

        Entity* winner;

        if (dist(gen) < 0.5) {
            winner = first;
        } else {
            winner = second;
        }

        std::cout << winner->getName() << " wins the duel!\n";

        return winner->clone();
    }

private:
    T1* first;
    T2* second;
};

} // namespace homework

