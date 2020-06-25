#include <iostream>
#include <vector>

using namespace std;




void vectors()
{
	vector<string> strings;

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	for (int i = 0; i < strings.size(); i++)
	{
		cout << strings[i] << endl;
	}

	for (auto str : strings)
	{
		cout << str << endl;
	}

	vector<string>::iterator it = strings.begin();

	cout << "Iterator: " << *it << endl;
	it++;
	cout << "Iterator: " << *it << endl;

	for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
	{
		cout << "for loop using iterator: " << *it << endl;
	}

	*it += 2;

	cout << *it << endl;
}


void vectorsAndMemory()
{
	vector<double> numbers(0);

	cout << "Size: " << numbers.size() << endl;

	int capacity = numbers.capacity();
	cout << "Capacity: " << capacity << endl;
	for (int i = 0; i < 10000; i++)
	{
		if (numbers.capacity() != capacity)
		{
			capacity = numbers.capacity();
			cout << "Capacity: " << capacity << endl;
		}
		numbers.push_back(i);
	}


	numbers.clear();
	numbers.resize(0);
	numbers.reserve(100000);//reserve memory in advance so that in runtime it wouldn't require re-allocating more memory while storing data
	cout << "Size: " << numbers.size() << endl;
	cout << "Capacity: " << numbers.capacity() << endl;

}


int main()
{
	//vectors();
	vectorsAndMemory();






	return EXIT_SUCCESS;
}