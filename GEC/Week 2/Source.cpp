#include <iostream>

int main()
{
	std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;

	std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;

	std::cout << "Size of short int: " << sizeof(short int) << " bytes" << std::endl;

	std::cout << "Size of long int: " << sizeof(long int) << " bytes" << std::endl;

	std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;

	std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;

	std::cout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes" << std::endl;


	enum Month
	{
		January = 1,
		FEBRUARY = 2,
		MARCH = 3,
		APRIL = 4,
		MAY = 5,
		JUNE = 6,
		JULY = 7,
		AUGUST = 8,
		SEPTEMBER = 9,
		OCTOBER = 10,
		NOVEMBER = 11,
		DECEMBER = 12
	};

	Month currentMonth = Month::OCTOBER;

	std::cout << "Current month is: " << currentMonth << std::endl;

	return 0;
}