#include "as2.hpp"

namespace homework {

	Knight::Knight(const std::string& name)
    		: Entity{name} {}

	void Knight::attack() const {
		std::cout << name << " swings a " << weapon << "\n";
	}

	std::unique_ptr<Entity> Knight::clone() const {
		return std::make_unique<Knight>(*this);
	}

	void Knight::setWeapon(std::string new_weapon) {
		weapon = new_weapon;
	}

	Sorcerer::Sorcerer(const std::string& name)
		: Entity{name}{}

	void Sorcerer::attack() const {
		std::cout << name << " casts a " << ability << "\n";
	}

	std::unique_ptr<Entity> Sorcerer::clone() const {
		return std::make_unique<Sorcerer>(*this);
	}
	
	void Sorcerer::setAbility(std::string new_ability){
		ability = new_ability;	
	}

	template <typename T1, typename T2>
	Duel<T1, T2>::Duel(T1* first, T2*second)
		: first_{first}, second_{second}{}
	
	template <typename T1, typename T2>
	std::unique_ptr<Entity> Duel<T1, T2>::fight() {
		first_->attack();
		second_->attack();
	
		auto random_number = dist(gen);

		if (random_number < 0.5) {
			std::cout << first_->getName() << " wins the duel!\n";
			return first_->clone();
		} else {
			std::cout << second_->getName() << " wins the duel!\n";
			return second_->clone();
		}
	}

	template struct Duel<Knight, Sorcerer>;
} // namespace homework
