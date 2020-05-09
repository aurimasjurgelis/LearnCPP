#include <iostream>

void print()
{
	std::cout << " there\n";
}


namespace foo
{
	int doSomething(int x, int y)
	{
		return x + y;
	}

	void print()
	{
		std::cout << "Hello";
	}
}

namespace goo
{
	int doSomething(int x, int y)
	{
		return x - y;
	}
}



namespace foo
{
	namespace goo
	{
		int add(int x, int y)
		{
			return x + y;
		}
	}
}

int g_{ 5 }; // the '_' is used when indicating that variables are global



extern int g_x;
extern const int g_y;


extern int c_x;




//THE INITIALIZATION order problem of global variables
int initX();
int initY();

int X{ initX() };
int Y{ initY() };

int initX()
{
	return Y; //Y isn't even initialized when this is called so by default global variables are initialized to 0
}

int initY()
{
	return 5;
}






int main()
{
	std::cout << foo::doSomething(4, 3) << '\n';
	std::cout << goo::doSomething(4, 3) << '\n';

	foo::print();
	::print();

	namespace boo = foo::goo; // boo now refers to foo::goo

	std::cout << boo::add(1, 2) << std::endl;


	std::cout << g_x << std::endl;
	std::cout << g_y << std::endl;



	std::cout << "Should print 2: " <<c_x << std::endl;



	//Initialization order problem:

	std::cout << X << " " << Y << '\n';


	return 0;
}