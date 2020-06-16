#include <iostream>


using namespace std;

class CanGoWrong
{
public:
	CanGoWrong()
	{
		size_t n;
		cout << "Enter the amount of memory to allocate: " << endl;
		cin >> n;
		char* pMemory = new char[n];
		delete[] pMemory;
	}
};

int main()
{
	try {
		CanGoWrong wrong;

	}
	catch (bad_alloc &e)
	{
		cout << "Caught exception: " <<e.what() << endl;
	}

	cout << "Still running" << endl;

	return 0;
}