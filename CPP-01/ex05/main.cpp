#include "Harl.hpp"

/* DEBUG, INFO, WARNING, ERROR */
int main( int ac, char **av )
{
	Harl	harl;
	
	if (ac != 2)
		return 0;
	harl.complain(av[1]);
}

