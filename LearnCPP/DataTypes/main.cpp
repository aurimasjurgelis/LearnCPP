#include <iostream>
#include <cstdint>
#include <bitset>
#include <cstddef>
#include "constants.h"

void test(void)
{
	return;
}


std::size_t getNumberOfBits()
{
	return 3;
}



int main()
{

	bool b{ !!!!!!!true };


	bool b1 = -1;

	std::cout << std::boolalpha;

	std::cout << b1 << std::endl;



	std::cout << "bool: " << b << " " << std::endl;




	std::cout << sizeof(int) << std::endl;


	std::cout << ((double)8 / (double)5) << std::endl;


	std::int16_t i(5);

	char c('a');

	std::cout << i << std::endl;


	std::cout << sizeof(std::int_fast64_t) << std::endl;


	char ch{ 'a' };
	std::cout << ch << std::endl;
	std::cout << static_cast<int>(ch) << std::endl;

	int xd{ static_cast<int>(ch) + 3 };
	std::cout << xd << std::endl;

	int64_t e = 32LU;

	int32_t y = static_cast<int64_t>(50324);

	std::cout << y << std::endl;
	float yt = 3.0l;
	float yd = 3.0f;





	constexpr std::size_t numberOfBits{ 4 };

	std::bitset<numberOfBits> ba{};

	std::cout << ba << std::endl;

	const std::size_t otherNumberOfBits{ getNumberOfBits() };

	//std::bitset<otherNumberOfBits> b2{}; //errorino




	std::cout << "Enter a radius: ";
	int radius{};
	std::cin >> radius;

	double circumference{ 2.0 * radius * constants::pi };
	std::cout << "The circuference is: " << circumference << '\n';










	return EXIT_SUCCESS;
}