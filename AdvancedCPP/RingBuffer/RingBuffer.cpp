#include <iostream>
#include "Ring.h"

using namespace std;

int main()
{
	Ring<string> textring(3);

	textring.add("one");
	textring.add("two");
	textring.add("three");

	/*for (int i = 0; i < textring.size(); i++)
	{
		cout << textring.get(i) << endl;
	}*/

	//C++98
	for (Ring<string>::iterator it = textring.begin(); it != textring.end(); it++) //if we can make this work, then the code below will work too!
	{
		cout << *it << endl;
	}

	cout << endl;

	//C++11
	for (auto value : textring)
	{
		cout << value << endl;
	}

	return 0;
}