#include <iostream>
using namespace std;

int main( void )
{
	string str = "HI THIS IS BRAIN";
	string *ptr = &str;
	string &ref = str;

	cout << "Memory Adress string:    " << &str << endl;
	cout << "Memory Adress pointer:   " << ptr << endl;
	cout << "Memory Adress reference: " << &ref << endl;

    cout << "Value of string:         " << str << endl;      
	cout << "Value of pointer:        " << *ptr << endl;
	cout << "Value of reference:      " << ref << endl;
}