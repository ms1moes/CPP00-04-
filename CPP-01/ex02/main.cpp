#include <iostream>

int main( void )
{
	string str = "HI THIS IS BRAIN";
	string *ptr = &str;
	string &ref = str;

	std::cout << "Memory Adress string:    " << &str << std::endl;
	std::cout << "Memory Adress pointer:   " << &ptr << std::endl;
	std::cout << "Memory Adress reference: " << &ref << std::endl;

    std::cout << "Value of string:         " << str << std::endl;      
	std::cout << "Value of pointer:        " << *ptr << std::endl;
	std::cout << "Value of reference:      " << ref << std::endl;
}
