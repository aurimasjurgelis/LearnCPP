#include <iostream>
#include <stack>
#include <queue>

using namespace std;


class Test {

private:
	string name;

public:
	Test(string name) : name(name)
	{

	}

	~Test()
	{
		//cout << "Object destroyed" << endl;
	}

	void print()
	{
		cout << name << endl;
	}


};

void Stack()
{
	//LIFO
	stack<Test> testStack;

	testStack.push(Test("Mike"));
	testStack.push(Test("John"));
	testStack.push(Test("Sue"));


	/*
	cout << endl;
	Test &test1 = testStack.top(); //just a reference, not a shallow copy
	testStack.pop(); //very NOT GOOD
	test1.print(); //reference refers to a destroyed object
	*/

	while (testStack.size() > 0)
	{
		Test& test = testStack.top();
		test.print();
		testStack.pop();
	}
}


void Queue()
{
	//FIFO
	queue<Test> testQueue;

	testQueue.push(Test("Mike"));
	testQueue.push(Test("John"));
	testQueue.push(Test("Sue"));

	cout << endl;

	testQueue.back().print();

	cout << endl;

	while (testQueue.size() > 0)
	{
		Test& test = testQueue.front();
		test.print();
		testQueue.pop();
	}
}

int main()
{
	//Stack();
	Queue();


	return EXIT_SUCCESS;
}