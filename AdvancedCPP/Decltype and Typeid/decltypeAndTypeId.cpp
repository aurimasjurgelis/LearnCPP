#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

int main()
{
	int value;
	cout << "int typeid:" << endl << typeid(value).name() << endl;
	string str;
	cout << "string typeid:" << endl << typeid(str).name() << endl;

	decltype(value) weed = 420;
	decltype(str) name = "Bronius";

	cout << "decltype(str) typeid:" << endl << typeid(name).name() << endl;
	cout << "My name is " << name << endl;

	return 0;
}