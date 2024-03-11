# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed
{
    private:
        int fixedPoint;
        static const int fractionalBits = 8;
    public:
        Fixed(void);
        Fixed(const Fixed& copy);
        Fixed(const int& fpValue);
        Fixed(const float& fpValue);
        ~Fixed(void);

        Fixed& operator = (const Fixed& src);

        int     getRawBits(void)const;
        void    setRawBits(int const raw);

        float   toFloat(void)const;
        int     toInt(void)const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& object);

# endif

