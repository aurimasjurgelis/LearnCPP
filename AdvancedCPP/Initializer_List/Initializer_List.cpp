#include <initializer_list>
#include <iostream>
#include <vector>
using namespace std;

class Test {
public:
	Test(initializer_list<string> texts)
	{
		for (auto value : texts)
		{
			cout << value << endl;
		}
	}

	void print(initializer_list<string> texts)
	{
		for (auto value : texts)
		{
			cout << value << endl;
		}
	}
};


int main()
{
	vector<int> numbers{ 1,2,3,4,5,6 };

	cout << numbers[2] << endl;

	Test test{ "apple","orange", "banana" };
	test.print({ "asdf", "fdas", "1234" });


	return 0;
}