#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Test {

public:
	int id;
	string name;

	Test(int id, string name) :id(id), name(name) {

	}
	void print() {
		cout << id << ": " << name << endl;
	}

	bool operator<(const Test& other) const {
		if (id == other.id)
		{
			return name < other.name;
		}
		else
		{
			return id < other.id;
		}
	}
	
};

bool comp(const Test& a, const Test& b)
{
	return a.name < b.name;
}


int main()
{
	vector<Test> tests;

	tests.push_back(Test(5, "Mike"));
	tests.push_back(Test(10, "Sue"));
	tests.push_back(Test(7, "Raj"));
	tests.push_back(Test(3, "Vicky"));

	
	sort(tests.begin(), tests.end());
	sort(tests.begin(), tests.end(), comp(tests.));


	for (unsigned int i = 0; i < tests.size(); i++)
	{
		tests[i].print();
	}

	return 0;

}
