#include <iostream>

void printValue(int value)
{
	std::cout << value << '\n';
}


void a()
{
	std::cout << "a() called" << std::endl;
}

void b()
{
	std::cout << "b() called" << std::endl;
}

int returnZero()
{
	return 0;
}

int main()
{

	a();
	b();


	int x{ 1 };

	std::cout << x << " ";
	x += 2;
	std::cout << x << " ";

	x += 3;
	std::cout << x << " ";

	x = 20;
	int y{ returnZero() };

	int z = x / y;
	std::cout.write("hello world",1);



	printValue(5);
	return 0;
}