#include <iostream>

using namespace std;


struct Test {
	virtual bool operator()(string& text) = 0;
};

struct MatchTest : public Test{ //functor
	virtual bool operator()(string &text) { 
		return text == "lion";
	}
};


void check(string text, Test &test) {
	if (test(text))
	{
		cout << "Text Matches!" << endl;
	}
	else {
		cout << "No match." << endl;
	}
}


int main()
{
	MatchTest pred;

	string value = "lion";



	MatchTest m;
	check("lion", m);

	return EXIT_SUCCESS;
}