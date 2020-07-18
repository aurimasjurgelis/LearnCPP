#pragma once
#include <iostream>

using namespace std;

template<class T>
class Ring
{
public:
	class iterator;
};

template<class T>
class Ring<T>::iterator {
public:
	void print() {
		cout << "Hello from iterator: " << T() << endl;
	}
};

/*

void Ring::iterator::print() {
	cout << "Hello from iterator" << endl;
}

*/
