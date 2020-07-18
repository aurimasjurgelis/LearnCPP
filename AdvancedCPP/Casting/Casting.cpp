#include <iostream>

using namespace std;

class Parent {
public:
	virtual void speak() {
		cout << "Parent..." << endl;
	}
};

class Brother : public Parent {
	virtual void speak() {
		cout << "Brother" << endl;
	}
};

class Sister : public Parent {

};


int main()
{
	Parent parent;
	Brother brother;
	Sister sister;

	float value = (float)3.23;
	/*
	cout << int(value) << endl; //old school casting (C-like)
	*/

	cout << static_cast<int>(value) << endl;

	Parent* pp = &brother;

	Brother* pb = static_cast<Brother*>(&parent);
	cout << pb << endl;

	/*
	//Static casting example
	Parent* ppb = &brother;

	Brother* pbb = static_cast<Brother*>(ppb);
	cout << pbb << endl;
	*/

	Parent&& p = static_cast<Parent&&>(parent);
	p.speak();

	//Dynamic casting

	Parent* ppb = &brother;
	Brother* pbb = dynamic_cast<Brother*>(ppb);

	if (pbb == nullptr)
	{
		cout << "Invalid cast" << endl;
	}
	else {
		cout << pbb << endl;
	}
	cout << pbb << endl;



	Sister* pss = reinterpret_cast<Sister*>(ppb);
	cout << pss << endl;

	


	return 0;
}