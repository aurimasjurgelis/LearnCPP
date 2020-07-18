#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

bool check(string &test) {
	return test.size() == 3;
}


class Check { //functor
public:
	bool operator()(string& str)
	{
		return str.size() == 4;
	}
} check1;

void run(function<bool(string&)> check) {
	string test = "stars";
	cout << check(test) << endl;
}


int main()
{
	int size = 5;
	vector<string> vec{ "one", "two", "three","four"};


	int count = count_if(vec.begin(), vec.end(), [size](string str) {return str.size() == size; });

	cout << count << endl;


	count = count_if(vec.begin(), vec.end(), check);
	cout << count << endl;

	count = count_if(vec.begin(), vec.end(), Check());
	cout << count << endl;


	
	auto lambda = [size](string test) {return test.size() == size; };
	run(lambda);
	run(check1);
	run(check);
	run(Check());

	function<int(int, int)> add = [](int one, int two) {
		return one + two;
	};

	cout << add(7, 4) << endl;

	return 0;
}