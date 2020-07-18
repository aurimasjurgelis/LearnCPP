#include <iostream>

using namespace std;

class Test {
	int id = 8;
	string name{ "Mike" };
public:
	Test() = default; //setting up the default constructor since the constructor below overrode the defualt constructor
	Test(const Test& other) = default;
	Test& operator=(const Test& other) = default; // default copy constructor

	Test(int id) : id(id)
	{

	}
	void print() {
		cout << id << ": " << name << endl;
	}
};


int main()
{
	Test test;
	test.print();

	Test test1(77);
	test1.print();

	Test test2 = test1;
	test2 = test;

	return 0;
}

