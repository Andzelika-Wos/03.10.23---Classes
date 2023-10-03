#pragma once
#include <iostream>
using namespace std;

class person
{
private:
	string name, surname;
	int age;

public:
	person(string newName, string newSurname, int newAge)
	{
		name = newName;
		surname = newSurname;
		age = newAge;
	}

	string getName()
	{
		return name;
	}

	string getSurname()
	{
		return surname;
	}

	int getAge()
	{
		return age;
	}

	void setName(string newName)
	{
		name = newName;
	}

	void print()
	{
		cout << "Name: \n" << name << endl;
		cout << "Surname: \n" << surname << endl;
		cout << "Age: \n" << age << endl;
	}

	int compareTo(const person& p2)
	{
		int compare = -2;

		if (age < p2.age)
	}



};
