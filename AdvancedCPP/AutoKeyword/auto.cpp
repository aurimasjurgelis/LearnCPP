#include <iostream>
#include <cstdint>
#include <vector>
using namespace std;

template <class T,class S>
auto test(T value1, S value2) {
	return value1 + value2;
}

auto num() {
	return 100;
}


int get()
{
	return 999;
}

auto test2()
{
	return get();
}



int main()
{
	auto value = 8;
	auto text = "Hello";
	cout << value << endl;
	cout << text << endl;
	cout << num() << endl;

	cout << test((uint16_t)5,(uint8_t)5) << endl;

	cout << test2() << endl;


	auto texts = { "one", "two", "three" };

	for (auto text : texts)
	{
		cout << text << endl;
	}

	string hello = "Hello";

	for (auto c : hello)
	{
		cout << c << endl;
	}


	vector<int> numbers;
	numbers.push_back(4);
	numbers.push_back(5);
	numbers.push_back(6);
	numbers.push_back(7);
	numbers.push_back(8);


	for (auto it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << *it << endl;
	}


	return 0;
}