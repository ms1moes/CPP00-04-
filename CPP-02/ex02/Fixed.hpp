# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

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

        Fixed operator + (const Fixed& src);
        Fixed operator - (const Fixed& src);
        Fixed operator * (const Fixed& src);
        Fixed operator / (const Fixed& src);

        bool operator > (const Fixed& src);
        bool operator < (const Fixed& src);
        bool operator >= (const Fixed& src);
        bool operator <= (const Fixed& src);
        bool operator == (const Fixed& src);
        bool operator != (const Fixed& src);

        Fixed operator ++ (int);
        Fixed& operator ++ (void);
        Fixed operator -- (int);
        Fixed& operator -- (void);

        static Fixed& min(Fixed& a, Fixed& b);
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static Fixed& max(Fixed& a, Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& object);

# endif
