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

		int		levelFinder (const std::string& level);
		void	complain ( std::string level );
};
