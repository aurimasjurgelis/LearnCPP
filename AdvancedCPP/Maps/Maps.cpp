#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, int> ages;

	ages["Mike"] = 40;
	ages["Raj"] = 20;
	ages["Vicky"] = 30;

	ages["Mike"] = 70;

	pair<string, int> addToMap("Peter", 100);

	ages.insert(pair<string, int>("Van", 300)); // you can add pairs to the map

	ages.insert(make_pair("squadW",42069));

	cout << ages["Raj"] << endl;


	cout << ages["Sue"] << endl; //adds to the map, not smth that we would always want... Here's the solution below

	if (ages.find("Vicky") != ages.end())
	{
		cout << "Found Vicky" << endl;
	}
	else {
		cout << "Key not found" << endl;
	}


	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		pair<string, int> age = *it;

		cout << age.first << ": " << age.second << endl;
	}

	/*

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
	{
		cout << it->first << ": " << it->second << endl;
	}
	*/


	return EXIT_SUCCESS;
}
