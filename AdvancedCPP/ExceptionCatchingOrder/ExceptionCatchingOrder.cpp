#include <iostream>
#include <exception>

using namespace std;

void goesWrong()
{
	bool error1Detected = true;
	bool error2Detected = false;

	if (error1Detected)
	{
		throw bad_alloc();
	}
	if (error2Detected)
	{
		throw exception();
	}
}


int main()
{
	try {
		goesWrong();
	}
	catch (bad_alloc& e) //order!!! since exception class is the parent class of all exceptions!
	{
		cout << "bad_alloc: " << e.what() << endl;
	}
	catch (exception &e)
	{
		cout << "exception: " << e.what() << endl;
	}

	return EXIT_SUCCESS;
}