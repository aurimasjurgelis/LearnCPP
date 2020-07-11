#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void test(int value)
{
	cout << "Hello: " << value << endl;
}

bool match(string test)
{
	//return test == "two";
	return test.size() == 3;
}

int countStrings(vector<string>& texts, bool (*boolFunctionPointer)(string test))
{
	int tally = 0;
	for (int i = 0; i < texts.size(); i++)
	{
		if (match(texts[i]))
		{
			tally++;
		}
	}
	return tally;
}


void FunctionPointers()
{
	test(7);

	void (*pTest)(int) = test; //void function pointer field
	pTest(8);
}

void UsingFunctionPointers()
{
	vector<string> texts;
	texts.push_back("one");
	texts.push_back("two");
	texts.push_back("three");
	texts.push_back("two");
	texts.push_back("four");
	texts.push_back("two");
	texts.push_back("three");

	cout << match("one") << endl;

	cout << count_if(texts.begin(), texts.end(), match) << endl;

	cout << countStrings(texts, match) << endl;
}


class Parent {
private:
	int one;

public:
	Parent() : one(0) {

	}

	Parent(const Parent& other) : one(0)
	{
		one = other.one;
		cout << "Copy constructor" << endl;
	}

	virtual void print() { //if this was virtual then cout << "Child" << endl; would be called, if not then parent would be called
		cout << "Parent" << endl;
	}

	virtual ~Parent() {

	}
};

class Child : public Parent {
private:
	int two;

public:
	Child() : two(0) {

	}

	void print() {
		cout << "Child" << endl;
	}
};

void ObjectSlicingAndPolymorphism()
{
	Child c1;
	Parent& p1 = c1;
	p1.print();

	Parent p2 = Child();
	p2.print();
}

class Animal {
public:
	virtual void run() = 0;
	virtual void speak() = 0;

};

class Dog : public Animal {
public:
	virtual void speak() {
		cout << "Woof!" << endl;
	}
};

class Labrador : public Dog
{
public:
	virtual void run() {
		cout << "Labrador running" << endl;
	}
};

void test(Animal& a) {
	a.run();
}

int main()
{
	Labrador lab;
	lab.run();
	lab.speak();

	Animal* animals[5];
	animals[0] = &lab;
	animals[0]->speak();

	test(lab);




	return EXIT_SUCCESS;
}