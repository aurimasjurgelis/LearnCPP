#include <iostream>
#include <memory>


using namespace std;

class Test {
public:
	Test() {
		cout << "created" << endl;
	}

	void greet() {
		cout << "Hello" << endl;
	}

	~Test() {
		cout << "Destroyed boiiiii" << endl;
	}
};

class Temp {
private:
	unique_ptr<Test[]> pTest;
public:
	Temp() : pTest(new Test[2]) {

	}

};

int main()
{
	//unique_ptr<Test[]> pTest(new Test[2]);
	//pTest[1].greet();
	
	//Temp temp;

	
	shared_ptr<Test> pTest2(nullptr); //wont be destroyed untill all of the pointers get out of scope
	
	{
		shared_ptr<Test> pTest1 = make_shared<Test>();
		pTest2 = pTest1;// comment this to see the effects
		auto pTest3 = pTest1;
	}


	cout << "Finished" << endl;
	return 0;
}