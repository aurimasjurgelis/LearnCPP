#include <iostream>

using namespace std;

template<class T, class K>
class Test {
private:
	T obj;

public:

	Test(T obj)
	{
		this->obj = obj;
	}

	void print() {
		cout << obj << endl;
	}


};

template<class T>
void print(T value)
{
	cout << "Template version: " << value << endl;
}


void print(int value)
{
	cout << "Non template version: " << value << endl;
}

template<class T>
void show()
{
	cout << T() << endl;
}


int main()
{
	Test<string,int> test1("Hello");
	test1.print();


	print<string>("Hello");
	print<>(5);
	print(5);

	print("Hi there");


	show<double>();


	return EXIT_SUCCESS;
}