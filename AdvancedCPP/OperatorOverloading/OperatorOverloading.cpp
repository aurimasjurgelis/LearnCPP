#include <iostream>
#include "Complex.h"

using namespace std;

class Test {
private:
	int id;
	string name;

public:
	Test() : id(0), name("") {

	}

	Test(int id, string name) : id(id), name(name)
	{

	}

	void print() {
		cout << id << ": " << name << endl;
	}

	const Test& operator=(const Test& other) {
		cout << "Assignment running" << endl;
		id = other.id;
		name = other.name;

		return *this;
	}

	Test(const Test& other) {
		cout << "Copy Constructor Running..." << endl;
		*this = other;
		/*id = other.id;
		name = other.name;*/
	}

	friend ostream& operator<<(ostream &out, const Test &test)
	{
		out << test.id << ": " << test.name << endl;
		return out;
	}
};

void AssignmentOperatorTesting()
{
	Test test1(10, "Mike");
	cout << "Print test1:" << endl;
	test1.print();

	Test test2(20, "Bob");
	test2 = test1; //this is the same as calling a method, default implementation of the = operator results in a shallow copy
	cout << "Print test2:" << endl;
	test2.print();

	Test test3;
	//test3 = test2 = test1;

	test3.operator=(test2); //test3 = test2
	cout << "Print test3:" << endl;
	test3.print();
	cout << endl;

	//Copy initialization, implicit copy constructor
	Test test4 = test1;
	test4.print();
}


void OverloadingLeftBitShift()
{
	Test test1(10, "Mike");
	Test test2(20, "Bob");

	cout << test1 << test2 << endl;

}



void ComplexNumberClassTesting()
{
	Complex c1(2, 3);
	Complex c2 = c1;
	Complex c3 = c2;

	//c1 = c2;
	c3 = c2;


	cout << c1 << " : " << c3 << endl;
}

void OverloadingPlusTesting()
{
	Complex c1(3, 4);
	Complex c2(2, 3);
	Complex c3 = c1 + c2;

	cout << c1 << endl;

	cout << c1 + c2 + c3 << endl;

	Complex c4(4, 2);
	Complex c5 = c4 + 7;
	cout << c5 << endl;

	Complex c6(1, 7);

	cout << 3.2 + c6 << endl;

	cout << c1 + c2 + 8 + 9 + c6 << endl;
}





int main()
{
	Complex c1(2, 4);
	Complex c2(3, 1);

	if (c1 == c2)
	{
		cout << "Equal" << endl;
	}
	if (c1 != c2)
	{
		cout << "Not Equal" << endl;
	}

	cout << *c1 + *Complex(4,3) << endl;


	return 0;
}