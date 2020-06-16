#include <iostream>
#include <vector>

using namespace std;

int main()
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


	for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
	{

	}
	


	


	return EXIT_SUCCESS;
}