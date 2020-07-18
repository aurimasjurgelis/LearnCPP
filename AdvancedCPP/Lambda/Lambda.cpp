#include <iostream>

using namespace std;


void testGreet(void (*greet)(string)) {
	greet("xX_ShaquilleOatmealTheGod_Xx");
}

void test(void (*pFunc)() ) {
	pFunc();
}
void runDivide(double (*divide)(double a, double b)) {
	auto rval = divide(9, 3);
	cout << rval << endl;
}

class Test {
private:
	int one{ 1 };
	int two{ 2 };
public:
	void run() {
		int three{ 3 };
		int four{ 4 };

		auto pLambda = [&,this]()
		{
			one = 111;
			cout << one << endl << two << endl;
			cout << three << endl << four << endl;
		};
		pLambda();
	}
};

int main()
{
	auto func = []()
	{
		cout << "Hello" << endl;
	};

	test(func);


	//cout << typeid(func).name() << endl;


	[](string str) 
	{
		cout << "Honestly, wtf is this shit and how does this work? " << str << endl;
	}("hello?");

	test([]() {cout << "Hello again :)" << endl; });


	auto pGreet = [](string name) {
		cout << "Hello: " << name << endl;
	};

	pGreet("Tom");
	testGreet(pGreet);

	auto pDivide = [](double a, double b) -> double{
		if (b == 0.0)
		{
			return 0; // if there's no trailing type then this would be an error becouse this would return an int not double
		}
		else {
			return a / b;
		}
	};

	cout << pDivide(4.20, 0.0) << endl;
	runDivide(pDivide);


	int one = 1;
	int two = 2;
	int three = 3;


	//Capture one and two by value
	[one,two]() {cout << one << "," << two << endl; }();

	//Capture all local variables by value
	[=]() {cout << one << "," << two << endl; }();

	//Capture all local variables by value, but capture three by reference
	[=, &three]() 
	{
		cout << one << "," << two << endl; 
		three = 5;
	}();
	cout << three << endl;

		
	//Capture all local variables by REFERENCE
	[&]() 
	{
		one = 9;
		two = 6;
		cout << one << ',' << two << endl;
	}();


	//Capture all local variables by reference, but two and three by value
	[&, two, three]()
	{
		one = 1000;
		//two = 40; //ILLEGAL, FBI, OPEN THE DOOR.
		cout << one << ',' << two << ',' << three << endl;
	}();
	cout << one << endl;

	
	cout << endl;
	cout << endl;
	cout << endl;

	Test test;
	test.run();




	cout << endl;
	cout << endl;
	cout << endl;

	//mutable lambdas

	int cats = 5;

	[cats]() mutable {
		cats = 8;
		cout << cats << endl;
	}();

	cout << cats << endl;

	return 0;
}