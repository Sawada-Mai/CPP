#include "Zombie.hpp"

int	main(void) {
	Zombie*	zombie;

	zombie = newZombie("aaa");
	zombie->announce();
	randomChump("bbb");
	delete zombie;
}
