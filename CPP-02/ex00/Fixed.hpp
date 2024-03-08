# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int fixedPoint;
        static const int fractionalBits = 8;
    public:
        Fixed(void);
        Fixed(const Fixed& copy);
        ~Fixed(void);

        Fixed& operator = (const Fixed& src);

        int getRawBits(void)const;
        void setRawBits(int const raw);
};
# endif