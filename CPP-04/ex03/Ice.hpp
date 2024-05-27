#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const & src);
        virtual ~Ice();
        Ice & operator=(Ice const & src);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif