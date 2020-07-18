#pragma once
#include <iostream>

using namespace std;

template<class T>
class Ring
{
private:
	int m_pos;
	int m_size;
	T *m_values;
public:
	class iterator;

public:
	Ring(int size) : m_pos(NULL), m_size(size), m_values(NULL) {
		m_values = new T[size];
	}

	~Ring() {
		delete [] m_values;
	}

	int size() {
		return m_size;
	}


	iterator begin()
	{
		return iterator(0, *this);
	}

	iterator end()
	{
		return iterator(m_size, *this);
	}

	void add(T value)
	{
		m_values[m_pos++] = value;
		if (m_pos == m_size)
		{
			m_pos = 0;
		}
	}

	T& get(int pos)
	{
		return m_values[pos];
	}
};

template<class T>
class Ring<T>::iterator {
private:
	int m_pos;
	Ring &m_ring;
public:
	iterator(int pos, Ring &ring) : m_pos(pos), m_ring(ring) {

	}

	iterator& operator++(int) { //postfix operator, int inside the bracket indicates a useless parameter but it indicates that this is postfix
		m_pos++;
		return *this;
	}
	iterator& operator++() { //prefix operator
		m_pos++;
		return *this;
	}

	T& operator*() {
		return m_ring.get(m_pos);
	}

	bool operator!=(const iterator &other) const
	{
		return m_pos != other.m_pos;
	}

};

/*

void Ring::iterator::print() {
	cout << "Hello from iterator" << endl;
}

*/
