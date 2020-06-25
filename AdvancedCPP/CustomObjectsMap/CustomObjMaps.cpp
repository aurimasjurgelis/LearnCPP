#include <iostream>
#include <map>

using namespace std;

class Person {
private:
	string name;
	int age;

public:

	Person() : name(""), age(0)
	{

	}

	Person(const Person& other)
	{
		cout << "Copy constructor running!" << endl;
		name = other.name;
		age = other.age;
	}

	Person(string name, int age) : name(name), age(age)
	{

	}

	void print() const //const because all the map functinality is also const because we should change things and everything is constant (such as keys)
	{
		cout << name << ": " << age << flush;
	}

	//this has to be implemented since maps sort by themselves by using an overloaded operator (if you are using obj as the key to the map)
	bool operator<(const Person& other) const //const means that the method cant change the fields within the object
	{
		if (name == other.name)
		{
			return age < other.age;
		}
		else
		{
			return name < other.name;
		}
	}
};


void CustomObjectsAsMapValues()
{
	map<int, Person> people;

	people[50] = Person("Mike", 40);
	people[420] = Person("Vicky", 30);
	people[3] = Person("Raj", 20);

	people.insert(make_pair(55, Person("Bob", 45)));

	for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->first << ": " << flush;
		it->second.print();
		cout << endl;
	}
}


void CustomObjectsAsMapKeys()
{
	map<Person, int> people;
	people[Person("Mike",40)] = 40;
	people[Person("Mike",444)] = 123; //added key changing functionality in the operator< overload method
	people[Person("Sue",30)] = 30;
	people[Person("Raj",20)] = 20;

	for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++)
	{
		cout << it->second << ": " << flush;
		it->first.print();
		cout << endl;
	}


}

int main()
{
	//CustomObjectsAsMapValues();
	CustomObjectsAsMapKeys();


	return 0;
}

