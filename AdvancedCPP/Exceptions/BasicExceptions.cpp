#include <iostream>
#include <string>

using namespace std;

bool error1 = true;
bool error2 = true;

void mightGoWrong();


void usesMightGoWrong()
{
	mightGoWrong();
}

void mightGoWrong()
{

	if (error1)
	{
		error1 = false;
		throw 8;
	}

	if (error2)
	{
		error2 = false;
		throw string("Something else went wrong!"); //creating an object
	}

	cout << "mightGoRight()" << endl;

}


int main()
{
	try {
		try {
			try {
				usesMightGoWrong();
			}
			catch (int e)
			{
				cout << "Error code: " << e << endl;
				throw "Something wrong"; //const char*
			}
		}
		catch (const char* str)
		{
			cout << "Error code: " << str << endl;
			usesMightGoWrong();
		}
	}
	catch (string str)
	{
		cout << "Error string: " << str << endl;
	}


	cout << "Still Running..." << endl;

	return 0;
}