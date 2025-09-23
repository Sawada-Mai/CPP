#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
}


void	Zombie::set_name(std::string name) {
	name_ = name;
}

void	Zombie::announce() {
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
