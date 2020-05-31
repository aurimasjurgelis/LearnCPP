#include <iostream>


std::int_fast64_t powint(int base, int exp)
{
	std::int_fast64_t result{ 1 };
	while (exp)
	{
		if (exp & 1)
			result *= base;
		exp >>= 1;
		base *= base;
	}

	return result;
}


int add(int x, int y)
{
	return x + y;
}



int main()
{
	int x{ 7 };
	int y{ 4 };

	std::cout << "int / int = " << x / y << std::endl;
	std::cout << "double / int = " << static_cast<double>(x) / y << "\n";
	std::cout << "int / double = " << x / static_cast<double>(y) << "\n";
	std::cout << "double / double " << static_cast<double>(x) / static_cast<double>(y) << "\n";



	//std::cout << "Enter a divisor" << std::endl;

	//int z{};

	//std::cin >> z;

	//std::cout << "12 / " << z << " = " << 12 / z << '\n';


	int xd{ 5 };


	int value = add(xd, xd++);

	std::cout << value << '\n';

	xd = { 5 };//resetting x

	value = add(xd, ++xd);

	std::cout << value << '\n';


	xd = 5;



	int cx{ 1 };
	int cy{ 2 };

	std::cout << (++cx, ++cy,xd) << std::endl; //does operations but evaluates the "rightest" one

	bool inBigClassRoom{ false };

	const int classSize = inBigClassRoom ? 30 : 20;




	return EXIT_SUCCESS;
}