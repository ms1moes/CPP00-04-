#include <iostream>

class Harl
{
    private:
		void	debug( void );
		void	info( void );
		void	error( void );
		void	warning( void );

	public:
		Harl();
		~Harl();
		void	complain( std::string level );
};